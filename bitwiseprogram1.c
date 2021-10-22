#include<stdio.h>
#include<stdint.h>
int main()
{
	uint32_t num=0,s=0,d=0,n=0;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("enter values of s and d to make the desired shifting\n");
	scanf("%d%d",&s,&d);
	n=num^(1<<s)^(1<<d);
	//m= (1<<d)^n;
	printf("%d\n",n);
	return 0;
}

