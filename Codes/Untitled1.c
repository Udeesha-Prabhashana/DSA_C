#include<stdio.h>
void main()
{
	int a[5],i;
	printf("enter the elements of array:\n");
	for(i=0;i<5;i++)
	scanf("%d",& a[i]); 
	
	for(i=0;i<5;i++)
	printf("array elemnt at index %d is: %d\n",i,a[i]);
	for(i=4;i>=0;i--)
	printf("array elemnt at index %d is: %d\n",i,a[i]);
	return 0;

}