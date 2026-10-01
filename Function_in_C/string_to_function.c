#include<stdio.h>

void displayString(char str[])
{
	printf("String : %s",str);

}

int main()
{
	char name[] = "Ram";

	displayString(name);

	return 0;
}
