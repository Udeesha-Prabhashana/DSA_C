# include <stdio.h>
# include <stdlib.h>

int main()
{
	int *ptr;
	ptr = (int *) malloc(sizeof(int));
	
	if (ptr != NULL)
	{
		*ptr = 200;
		printf("prt pointer points to value : %d", *ptr);
		free(ptr);
	}
	else
	{
		printf("Allocation faild");
	}
	return 0;
}