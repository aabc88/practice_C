#include <stdio.h>

int main()
{
	int num1;

	scanf("%d\n", &num1);

	switch (num1)
	{
		case 1:
			printf("1\n");
			break;
			
		case 2:
			printf("2\n");
			break;

		default:
			printf("default");
			break;
	}
	return 0;
}
