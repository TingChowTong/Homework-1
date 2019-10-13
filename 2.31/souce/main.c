#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;


	printf("This is made to cacalculate the square and cube from 1 to 10.\n Your number here=");
	scanf_s("%d", &a);

	if (a > 10 && a < 0)
	{
		printf("I said from 1 to 10\n");
	}
	else
	{
		b = a * a;
		c = a * a * a;
		printf("number	square	cube\n");
		printf("%d	%d	%d\n", a, b, c);
	}


	return 0;
}