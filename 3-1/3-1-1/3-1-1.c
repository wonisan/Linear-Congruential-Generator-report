
//2-2にも記載したが、mを素数、
//a,bはそれぞれ1以上m未満の数でなければならない。
//(周期をなるべく長くするため)

#include <stdio.h>

main(){

int cnt = 0;		//カウンタ

int n = 0;		//2-2の変数n
int a = 3;		//2-2の変数a
int b = 1;		//2-2の変数b
int m = 7;		//2-2の変数m

int x[6];		//入れ子
x[0] = b;		//x[0]の初期設定

while(cnt<6){		//疑似乱数生成
   x[cnt+1] = (a*x[cnt])%m;
   printf("x[%d] = %d\n",cnt,x[cnt]);
   cnt = cnt + 1;
   }

 return 0;
}