#include<stdio.h>
float main()
{
	float a,b,c;
	int x;
	
	printf("enter the case 1 for find circle\n");
	printf("enter the case 2 for find rectangle\n");
	printf("enter the case 3 for find triangle\n");
	scanf("%d",&x);
	switch (x)
	{
		case 1:
			{
				printf("enter the value of redius a\n");
				scanf("%f",&a);
                c=3.14*a*a;
                printf("%f",c);	
			}
	    break;
	    case 2:
	    	{
	    		printf("enter the value for Length a\n");
	            scanf("%f",&a);
	            printf("enter the value for width b\n");
	            scanf("%f",&b);
	            c=a*b;
	            printf("%f",c);
			}
	    break;
	    case 3:
	    	{
	    		printf("enter the value for base a\n");
	            scanf("%f",&a);
	            printf("enter the value for height b\n");
	            scanf("%f",&b);
	            c=a*b*1/2;
	            printf("%f",c);
			}
			break;
		default :
		     printf("wrong number press");	
    }
	return 0;
}
