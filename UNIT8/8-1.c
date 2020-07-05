#include <stdio.h>

int main()
{
	float num1 = 0.1f;
	double num2 = 1234.1234123;
	long double num3 = 1.1234561;

	printf("%f %f %Lf\n", num1, num2, num3);

	return 0;
}
