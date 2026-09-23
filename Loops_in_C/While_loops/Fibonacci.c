#include<stdio.h>


int main()
{
	int n;
	int i = 1;
	int a =0, b=1, next;

	printf("Enter a number of terms :");
	scanf("%d",&n);

	while(i<=n)
	{
	    printf("%d",a);
                next = a + b;
		a = b ;
		b = next;
		i++;
	}
       printf("\n");

       return 0;
}
	
