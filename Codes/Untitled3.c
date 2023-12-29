#include<stdio.h>
void main()
{
	int a[10],i;
	int even=0, odd=0; 
	printf("enter the numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",& a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		even+=1;
		else
		odd+=1;
	}
	printf("total nubmer of even= %d\n",even);
	printf("total number of odd= %d\n",odd);
	return 0;
}