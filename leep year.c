#include<stdio.h>
int main()
{
	int a,day;
	printf("enter the year\n");
	scanf("%d",&a);
	day=a/4;
	if(day%2==0)
	{
		printf("this is leep year");
	}
	
	else
	{
		printf("this is not leep year");
	}
	return 0;
}
