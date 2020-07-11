#include <stdio.h>

int main()
{
	int count;

	scanf("%d", &count);

	int i = 0;
	while(i < count)
	{
		printf("hello i:%d count:%d\n", i, count);
		i++;
	}

	return 0;
}

