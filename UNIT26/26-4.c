#include<stdio.h>

int main()
{
	int num1;

	scanf("%d", &num1);

	switch(num1)
{
	case 1:
		{
			int num2 = num1;
			printf("%d\n", num2);
			break;
		}
	case 2:
		printf("2\n");
		break;

	default :
		printf("default\n");
		break;
}

return 0;
}
