
//2-2�ɂ��L�ڂ������Am��f���A
//a,b�͂��ꂼ��1�ȏ�m�����̐��łȂ���΂Ȃ�Ȃ��B
//(�������Ȃ�ׂ��������邽��)

#include <stdio.h>

main(){

int cnt;		//�J�E���^

int a;
printf("a = ");
scanf("%d",&a);		//2-2�̕ϐ�a

int b;	
printf("b = ");
scanf("%d",&b);		//2-2�̕ϐ�b

int m;
printf("m = ");
scanf("%d",&m);		//2-2�̕ϐ�m

int x[m-1];		//����q
			//�����A2-2�̕ϐ�n�̎d��

x[0] = b;		//x[0]�̏����ݒ�

for(cnt=0;cnt<m;cnt=cnt+1){		//�^����������
   x[cnt+1] = (a*x[cnt])%m;
   printf("x[%d] = %d\n",cnt,x[cnt]);
   if(x[0] == x[cnt+1]){
      break;
     }
}
 return 0;
}