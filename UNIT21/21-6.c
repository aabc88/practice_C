#include<stdio.h>

int main()
{
	int num1, num2;
	num1 = 1;
	num2 = 0;

	printf("%s\n", num1 && num2 ? "true" : "false");

	printf("%s\n", num1 || num2 ? "true" : "false");

	return 0;
}
