#include <limits.h>
#include <stdio.h>

int main()
{
	char num1 = CHAR_MAX + 1;
	short num2 = SHRT_MAX + 1;
	int num3 = INT_MAX +1;
	long long num4 = LLONG_MAX + 1;

	printf("%d %d %d %lld\n", num1, num2, num3, num4);
	return 0;
}
