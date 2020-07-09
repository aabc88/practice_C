#include<stdio.h>
int main()
{
	int num1, num2, num3, num4;
	num1 = 20;
	num2 = 10;
	num3 = 30;
	num4 = 15;

	printf("%d\n", num1 > num2 && num3 > num4);
	printf("%d\n", num1 > num2 && num3 < num4);

	printf("%d\n", num1 > num2 || num3 < num4);
	printf("%d\n", num1 < num2 || num3 < num4);

	printf("%d\n", !(num1 >  num2));

	return 0;
}
