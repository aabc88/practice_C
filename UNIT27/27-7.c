#include <stdio.h>

int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		printf("hello %d-%d\n", count, i);
	}

	return 0;
}
