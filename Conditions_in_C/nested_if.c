#include<stdio.h>

int main()
{
	int age = 20;
	int has_id = 1;

	if(age >= 18)
	{
		if(has_id == 1)
		{
			printf("Entry Allowed\n");
		}
		else
		{
			printf("ID Required\n");
		}
	}
	else
	{
		printf("Underage\n");
	}

return 0;
}
