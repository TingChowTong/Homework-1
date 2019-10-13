#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h;
	float w;
	float dh;
	float bmi;

	printf("This is brought to you by Department of Human and Health Services and National Institues of Health.\n");
	printf("Please enter your height and weight so that we could calculuate your BMI=\n");

	scanf_s("%f%f", &h, &w);
	dh = h * h;
	bmi = w / dh;


	if (bmi < 18.5)
	{
		printf("You are underweight\n");
	}
	
	if (18.5 <= bmi && bmi <= 24.9)
	{
		printf("You are normal\n");
	}

	if (25 <= bmi && bmi <= 29.9)
	{
		printf("You are overweight\n");
	}

	if (bmi >= 30)
	{
		printf("You are obese\n");
	}

	system("pause");
	return 0;
}
