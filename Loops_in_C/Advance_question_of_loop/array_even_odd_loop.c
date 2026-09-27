#include<stdio.h>

int main()
{
        int arr[6] = {10,15,22,31,40,55};
        int i;
        int even = 0;
        int odd = 0;

        for(i=0; i<6; i++)
        {
                if(arr[i]%2==0)
                {
                        even++;
                }

		else
                {
                        odd++;

                }

        }

        printf("Even numbers = %d\n",even);
        printf("Odd numbers = %d\n",odd);

        return 0;
}
