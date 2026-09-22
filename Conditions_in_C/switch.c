#include<stdio.h>

int main()
{
	int choice;

	printf("1. LED ON\n");
	printf("2. LED OFF\n");
	printf("3. Exit\n");

	printf("Enter your choice\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("LED is ON\n");
			break;

	       case 2:
			printf("LED is OFF\n");
			break;

		case 3:
			printf("Exiting Program\n");
			break;

		default:
			printf("Invalid choice");
	}

	return 0;
}
