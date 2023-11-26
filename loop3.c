#include <stdio.h>
main()
{
	int p,n;
	printf("Enter number:");
	scanf("%d",&n);
	for(p=1;p<21;p=p+1)
	{
		printf("\n %d * %d = %d",n,p,n*p);
	}
		
}
