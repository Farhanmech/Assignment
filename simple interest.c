#include<stdio.h>
int main()
{
	int a,b,c,x,f;
	printf("enter the principal amount\n");
	scanf("%d",&a);
	printf("enter the interest %\n");
	scanf("%d",&b);
	printf("enter the years\n");
	scanf("%d",&c);
	x=a*b/100;
	f=x*c;
	printf("%d",f);
	return 0;
}
