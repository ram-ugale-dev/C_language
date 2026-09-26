#include<stdio.h>

int main()
{

        int arr[6] = {10,0,20,0,30,40};
        int i;

        for(i=0; i<6; i++)
        {
                if(arr[i]==0)
                {
                        continue; // continue to skip zero number 
                }

                printf("%d\n",arr[i]);
        }

        return 0;
}

