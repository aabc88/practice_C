#include <stdio.h>
#include <limits.h>

int main()
{
	char c = CHAR_MIN;
	short s = SHRT_MIN;
	int i = INT_MIN;
	long l = LONG_MIN;
	long long ll = LLONG_MIN;

	printf("%d %d %d %ld %lld\n", c, s, i, l, ll);
	return 0;
}

