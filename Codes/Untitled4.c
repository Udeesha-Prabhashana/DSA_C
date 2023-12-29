#include<stdio.h>
void main()
{
	int array1[5],array2[5],sumarray[5];
	int i;
	printf("enter the numbers:\n");
	for(i=0;i<5;i++)
	scanf("%d",& array1[i]);
	printf("enter the numbers:\n");
	for(i=0;i<5;i++)
	scanf("%d",& array2[i]);
	for(i=0;i<5;i++)
	{
	 sumarray[i]=array1[i]+array2[i];
	 printf("enter the total is %d=%d:\n",i,sumarray[i]);	 
    }
	 return 0;
}