#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float d;
	float c;
	float cg;
	float p;
	float t;
	float sum;

	printf("This is made to calculate how much you spend per day because of driving\n");
	printf("Required data=Total miles driven in a day, cost per gallon of gasoline, average miles per galon, parking fees per day, tolls per day\n");
	printf("Enter data here=\n");

	scanf_s("%f%f%f%f%f", &d, &c, &cg, &p, &t);

	sum = d * c / cg + p + t;

	printf("%f, this is how much you use a day.\n", sum);

	system("pause");
	return 0;


}