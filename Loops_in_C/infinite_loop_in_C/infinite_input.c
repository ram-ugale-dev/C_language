#include<stdio.h>

int main()
{
	int num ;

	for(;;)
	{
	     printf("Enter a number ( 0 to exit ): ");
             scanf("%d",&num);


		if(num==0)
		{
			break;
		}
		
		printf("You enterd :%d\n", num);

	}

	printf("Program Stopped.\n");

	return 0;

}


