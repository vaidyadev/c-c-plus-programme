#include <stdio.h>
main()
{
	float a, b;
	int ch;
	printf("Enter first number:");
	scanf ("%f",&a);
	printf("\nEnter second number");
	scanf ("%f",&b);
	printf("\n **********ACTION**********");
	printf("\n 1. ADDITION");
	printf("\n 2. MULTIPLICATION");
	printf("\n 3. SUBSTACTION");
	printf("\n 4. DIVISION");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n addition of %f and %f is %f ",a,b,a+b);
			break;
			case 2:
				printf("\n multiplication of %f and %f is %f ",a,b,a*b);
				break;
				case 3:
					printf("\n substraction of %f and %f is %f ",a,b,a-b);
					break;
					case 4:
						printf("\n multiplication of %f and %f is %f ",a,b,a/b);
						break;
		default:
			printf("Enter proper choice");
						
					
			
	}
	
}
