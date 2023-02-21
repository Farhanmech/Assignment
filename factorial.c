#include<stdio.h>
int fact(int n);
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("factorial is :%d",fact(a));
	return 0;
}
int fact(int n)
{
  if(n==1)
  {
  	return 1;
  }
  int factx=fact(n-1);
  int factz=factx*n;
  return factz;
}
