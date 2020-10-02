#include <stdio.h>
int main ()
{
int i,num;
  loop:
  printf("\nEnter Number:");
  scanf("%d",&num);
  if(num>0)
  if((num==1||num%2==0 || num%3==0 ||num%5==0||num%7==0)&&
   (num!=2&&num!=3&&num!=5&&num!=7)){
      printf("Not prime number !!!");
      goto loop;
  }else{
  for(i=1;i<13;i++)
       printf("|%d x %d = %d\n",num,i,i*num);
       goto loop;
       }
return 0;
}