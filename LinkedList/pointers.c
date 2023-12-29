# include <stdio.h>

// Ex: 01
//int main()
//{
//	int a=10;
//	float f = 1.1;
//	char c = 'B';
//	
//	int *ptra;
//	float *ptrf;
//	char *ptrc;
//	
//	ptra = &a;
//	ptrf = &f;
//	ptrc = &c;
//	
//	printf("ptra value = %d\n", *ptra);
//	printf("ptrf value = %f\n", *ptrf);
//	printf("ptrc value = %c\n", *ptrc);
//	
//	return 0;
//}

// Ex: 02  **** & (Address of) and *(Indirection - value of) *****
//int main()
//{
//	int a=10, b=a, c;
//	int *p, *q;
//	*p = a;
//	q = &c;
//	
//	printf("a = %d\n", a);
//	printf("a = %d\n", *p);
//	printf("address a = %x\n", &a);
//	printf("address a = %x\n", p);
//	printf("address c = %x", q);
//	
//	return 0;
//}

// Ex: 03 Void Pointers
//int main()
//{
//	void *vp;
//	int a = 5;
//	char c = '0';
//	
//	vp = &a;
//	printf("a = %d\n", *(int *)vp);
//	
//	vp = &c;
//	printf("c = %c\n", *(char *)vp);
//	
//	return 0;
//}