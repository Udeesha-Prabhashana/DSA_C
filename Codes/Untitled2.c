#include<stdio.h>
void main()
{
	int marks[5],i;
	float sum=0,avg;
	printf("enter tha 5 student marks:\n");
	for(i=0;i<5;i++)
	{
	    scanf("%d",& marks[i]);
    }
	for(i=0;i<5;i++)
	{
		sum+=marks[i];
	}
	avg= sum/5; 
	printf("SUM is =%f\n",sum);
	printf("AVERAGE is =%f",avg);
	return 0;
}