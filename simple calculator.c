#include<stdio.h>
// Simple calculator
int main()
{
	int a,b,c;
	printf("enter the value for a");
	scanf("%d",&a);
	printf("enter the value for b");
	scanf("%d",&b);
	printf("enter the case 1 to 5\n");
	scanf("%d",&c);
	switch (c)
	{
		case 1 :
			c=a*b;
			{
				printf("%d",c);
			}
			break;
		case 2 :
			c=a/b;
			{
				printf("%d",c);
			}
			break;
		case 3 :
			c=a+b;
			{
				printf("%d",c);
			}
			break;
		case 4 :
			c=a-b;
			{
				printf("%d",c);
			}
			break;
		case 5:
			c=a%b;
			{
				printf("%d",c);
			}
	        break;
		default :
		 printf("wrong number"); 	 
    }
	return 0;
}
