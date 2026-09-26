#include<stdio.h>

int main()
{
	 int arr[6] = { 5,9,8,3,4,0};
	 int i;

	 for(i=0; i<6; i++)
	 {
		 if(arr[i] == 0)
		 {
			 printf("first zero found at index :%d",i);
			 break;
		 }
	 }

	  return 0;
}

