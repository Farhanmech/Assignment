#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the 1 for convert year to days\n");
	printf("enter the 2 for convert days to year\n");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			{
			  printf("enter the years\n");
			  scanf("%d",&a);
			  b=365*a;
	          printf("days is %d",b);	
			}
			break;
		case 2:
			{
			  printf("enter the days\n");
			  scanf("%d",&a);
			  b=a/365;
	          printf("Year is %d",b);	
			}
			break;
		default:
		    {
			  printf("Please check the number"); 
			}	
	}
	
	return 0;
}
