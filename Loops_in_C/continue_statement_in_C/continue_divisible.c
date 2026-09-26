#include<stdio.h>

int main()
{
        int i;

        for(i=1; i<=20; i++)
        {
                if(i%3 == 0 )
                {
                        continue; // continue to skip numbers Divisible by Specific Number  
                }

                printf("%d\n",i);
        }

        return 0;
}
