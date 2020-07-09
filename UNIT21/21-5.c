#include <stdio.h>
int main()
{
	int num1,num2;
	num1 = 1;
	num2 = 0;

	if(num1 && num2)
		printf("true\n");
	else
		printf("false\n");

	if(num1 || num2)
		printf("true\n");
	else
		printf("false\n");
	if(!num1)
		printf("true\n");
	else
		printf("false\n");

	return 0;
}

