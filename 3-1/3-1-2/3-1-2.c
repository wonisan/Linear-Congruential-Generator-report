
//2-2にも記載したが、mを素数、
//a,bはそれぞれ1以上m未満の数でなければならない。
//(周期をなるべく長くするため)

#include <stdio.h>

main(){

int cnt;		//カウンタの定義

int n;
printf("n = ");
scanf("%d",&n);		//2-2の変数n

int a;
printf("a = ");
scanf("%d",&a);		//2-2の変数a

int b;	
printf("b = ");
scanf("%d",&b);		//2-2の変数b

int m;
printf("m = ");
scanf("%d",&m);		//2-2の変数m

int x[n];		//入れ子
x[0] = b;		//x[0]の初期設定

printf("x[0] = %d\n",b);		//x[0]は計算しなくてもわかる
for(cnt=0;cnt<n;cnt=cnt+1){		//疑似乱数生成
   x[cnt+1] = (a*x[cnt])%m;
   printf("x[%d] = %d\n",cnt+1,x[cnt+1]);
   }

 return 0;
}