#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int y;

	printf("This is made to determine if x is a multiple of y\n");
	printf("Please enter x and y=\n");
	
	scanf_s("%d%d", &x, &y);
	
	if (y % x != 0)
	{
		printf("%d isn't a multiple of %d\n", x, y);
	}

	else
	{
		printf("%d is a multiple of %d\n", x, y);
	}

	system("pause");
	return 0;
}