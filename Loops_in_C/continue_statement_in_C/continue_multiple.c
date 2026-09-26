#include<stdio.h>

int main()
{

        int arr[10] = {10,20,30,40,50,60,70,80,90,100};
        int i;

        for(i=0; i<10; i++)
        {
                if(arr[i]==20 || arr[i]==50 || arr[i]==80 )
                {
                        continue; // continue to skip multiple number 
                }

                printf("%d\n",arr[i]);
        }

        return 0;
}


