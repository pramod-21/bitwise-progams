//program to exchange 2 inputs first digits
#include <stdio.h>
#include <stdint.h>
int main()
{
uint32_t fnum=0,snum=0,s=0,d=0,m=0,n=0;
printf("enter two numbers\n");
scanf("%d%d",&fnum,&snum);
printf("enter values of s and d to shift number\n");
scanf("%d%d",&s,&d);
m=(1<<s)^fnum;
n=(1<<d)^snum;
printf("after changeing the bits fnum=%d,snum=%d\n",m,n);
for(i=0,j=0;m>0,n>0;)
return 0;
}
