#include<stdio.h>

void changeValue(int *number)
{
	*number = 100;

}

int main()
{
	int number = 10;

	printf("Before Function call : %d\n",number);

	changeValue(&number);

	printf("After Function call : %d\n",number);


	return 0;
}
