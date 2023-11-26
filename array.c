#include <stdio.h>
main()
{
	int a[10];
	int i,sum;
	sum=0;
	for(i=0;i<10;i=i+1)
	{
		printf("\n Enter number:");
		scanf("%d" ,&a[i]);
	}
	for(i=0; i<10;i++)
	{
	sum=sum+a[i];	
	}
	printf("\n Total of ten value:%d",sum);
	
}
