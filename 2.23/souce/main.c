#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	
	printf("Please insert 3 integers.\n");
	printf("x y z");
	printf("This is made to tell you the largest and smallest.\n");

	scanf_s("%d%d%d", &num1, &num2, &num3);
	
	if (num1 > num2 && num2 > num3)
	{
		printf("%d is the largest, %d is the smallest\n",num1 ,num3);
	}

	if (num1 > num3 && num3 > num2)
	{
		printf("%d is the largest, %d is the smallest\n",num1 ,num2);
	}

	if (num2 > num1 && num2 > num3)
	{
		printf("%d is the largest, %d is smallest\n",num2 ,num3);
	}

	if (num2 > num3 &&  num3 > num1)
	{
		printf("%d is the largest, %d is the smallest\n",num2 ,num1);
	}

	if (num3 > num2 && num2 > num1)
	{
		printf("%d is the largest, %d is the smallest\n",num3 ,num1);
	}

	if (num3 > num1 && num1 > num2)
	{
		printf("%d is the largest, %d is the smallest\n",num3 ,num2);
	}

	system("pause");
	return 0;
}