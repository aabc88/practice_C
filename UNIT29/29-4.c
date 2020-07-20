#include<stdio.h>

int main()
{
	int count;

	scanf("%d", &count);

	do
	{
		printf("hello %d", count);

		count --;
	}
	while(count>0);

	return 0;
}
