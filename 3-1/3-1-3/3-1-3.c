
//2-2にも記載したが、mを素数、
//a,bはそれぞれ1以上m未満の数でなければならない。
//(周期をなるべく長くするため)

#include <stdio.h>

main(){

int cnt;		//カウンタ

int a;
printf("a = ");
scanf("%d",&a);		//2-2の変数a

int b;	
printf("b = ");
scanf("%d",&b);		//2-2の変数b

int m;
printf("m = ");
scanf("%d",&m);		//2-2の変数m

int x[m-1];		//入れ子
			//実質、2-2の変数nの仕事

x[0] = b;		//x[0]の初期設定

for(cnt=0;cnt<m;cnt=cnt+1){		//疑似乱数生成
   x[cnt+1] = (a*x[cnt])%m;
   printf("x[%d] = %d\n",cnt,x[cnt]);
   if(x[0] == x[cnt+1]){
      break;
     }
}
 return 0;
}