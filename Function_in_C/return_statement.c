#include<stdio.h>

int square(int number)
{
	int square;

	square = number * number;

	return square;

}

int main()
{
	int answer;

	answer = square(5);

	printf("Square =%d", answer);

	return 0;
}
