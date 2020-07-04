#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = -128;
	int16_t num2 = 32767;
	int32_t num3 = 2147483648;

	printf("%d %d %d\n", num1, num2, num3);

	uint8_t num5 = 255;
	uint16_t num6 = 65535;
	uint32_t num7 = 4294967295;

	printf("%u %u %u\n", num5, num6, num7);
	return 0;
}
