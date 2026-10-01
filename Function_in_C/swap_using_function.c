#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10 ;
	int b = 20;

	printf("Before Swap :\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);

	swap(&a,&b);

        printf("After Swap :\n");
        printf("a = %d\n",a);
        printf("b = %d\n",b);

	return 0;
}
