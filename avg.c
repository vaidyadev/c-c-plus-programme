#include<stdio.h>
#include<conio.h>
float main()
{
	int i;
	float avg;
	int m =3;
	int n[m];
	float sum=0;
	printf("Enter %d numbers to find average:\n",m);
	for(i=0;i<m;i++)
    {

	printf("Enter number %d:",i+1);
	scanf("%d",& n[i]);
	sum+=n[i];

	
	}
	avg=sum/m;
	printf("The average of above %d numbers  is %f: %\n",m,avg);
	return 0;

	
}
