#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;

	printf("Enter a integer, this is made to read odd or even numbers.\n ");
	
	scanf_s("%d" ,&num1);

	if (num1 %2 == 0)
	{
		printf("It's a even number.\n");
	}

	else
	{
		printf("It's a odd number.\n");
	}

	system("pause");
	return 0;

}