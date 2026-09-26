#include<stdio.h>

int main()
{
        int i;

        for(i=1; i<=20; i++)
        {
                if(i>=8 && i<=12 )
                {
                        continue; // continue to skip numbers Within a Specific range. 
                }

                printf("%d\n",i);
        }

        return 0;
}

