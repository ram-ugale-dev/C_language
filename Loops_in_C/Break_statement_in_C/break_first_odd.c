#include<stdio.h>

int main()
{
        int arr[6] = { 4,8,10,7,12,15};
        int i;

        for(i=0; i<6; i++)
        {
                if(arr[i]%2 != 0)
                {
                        printf("First even number : %d\n", arr[i]);
                        break;
                }
        }

     return 0;
} 
