#include <stdio.h>

int main()
{
	int num1;
	scanf("%d", &num1);

	switch(num1)
	{
		case 1:
			printf("1\n");

		case 2:
			printf("2\n");

		default :
			printf("default");
	}

	return 0;
}
