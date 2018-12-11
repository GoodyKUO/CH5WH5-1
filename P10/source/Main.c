#include<stdio.h>
#include<stdlib.h>

void AAAAAAAAAAAAA(int *nPtr);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	AAAAAAAAAAAAA(&number);

	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

void AAAAAAAAAAAAA(int *nPtr)
{
	*nPtr = *nPtr * *nPtr **nPtr;
}