#include<stdio.h>

int main()
{
	int count;

	scanf("%d", &count);

	for(int i = 1; i<= count; i++)
	{
		if (1 % 2 != 0)
			continue;

		printf( "%d\n", i);
	}

	return 0;
}
