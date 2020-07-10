#include <stdio.h>

int main()
{
	int num1;

	scanf("%d", &num1);

	switch(num1)
	{
		case 1:
		case 2:
			printf("1 or 2\n");
			break;

		case 3:
		case 4:
			printf("3 or 4\n");
			break;
	}

	return 0;
}
