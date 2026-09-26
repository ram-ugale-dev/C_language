#include<stdio.h>


int main()
{

	int choice;

	for(;;)
	{
		printf("\n----MENU----\n");
		printf("1. Say Hello\n");
		printf("2. Say Welcome\n");
		printf("3. Exit\n");

		printf("Enter your choice: ");
		scanf("%d",&choice);

		if(choice==1)
		{
			printf("Hello\n");
		}
		else if(choice==2)
		{
			printf("Welcome\n");
		}
		else if(choice==3)
		{
			printf("Exiting Program...\n");
			break;
		}
		else
		{
			printf("Invalid Choice\n");
		}

	}

	return 0;
}


