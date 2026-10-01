#include<stdio.h>

void functionC()
{
        printf("Inside Function C.\n");
}

void functionB()
{
        printf("Inside Function B.\n");

        functionC();

        printf("Back to function B.\n");
}

void functionA()
{
        printf("Inside Function A.\n");

        functionB();

        printf("Back to function A.\n");
}

int main()
{
        printf("Inside Main  Function.\n");

        functionA();

        printf("Back to Main function.\n");
}
