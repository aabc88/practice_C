#include <stdio.h>

int main()
{
	unsigned char flag = 0;

	flag |=1;
	flag |=2;
	flag |=4;

	printf("%u\n", flag);

	if(flag&1)
		printf(" 0000 0001\n");
	else
		printf("0000 0001 x\n");

	if(flag&2)
		printf("0000 0010\n");
	else
		printf("0000 0010 x\n");

	if(flag&4)
		printf("0000 0100\n");
	else
		printf("0000 0100 x\n");

	return 0;
}
