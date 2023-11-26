#include<stdio.h>
#include<conio.h>
void main()	
{
	int g,h,k;
	printf("Enter first number:");
	scanf("%d",& h);
	printf("Enter Second number:");
	scanf("%d",& k);
	g=h%k;
	printf("The modulus of %d and %d is %d",h,k,g);
}
