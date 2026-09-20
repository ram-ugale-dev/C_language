#include<stdio.h>

int main()

{
	int a = 5;
	printf("Initial Value of a = %d\n", a);

	a++;  // post INCREMENT 
	printf("After a++ a will be = %d\n",a);

	++a;  // pre Increment
	printf("After ++a a will be = %d\n",a);

	a--;   // post Decrement 
	printf("After a-- a will be = %d\n", a);

	--a;   //pre Decrement
	printf("After --a a will be = %d\n",a);

	return 0;
}
