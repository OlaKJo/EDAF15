#include <stdio.h>
#include <math.h>

unsigned int binary_digit_sum(unsigned int);

int main(void)
{
	unsigned int a = 325;
	printf("The binary digit sum of %u is %u\n", a, binary_digit_sum(a));
}

unsigned int binary_digit_sum(unsigned int value)
{
	unsigned int sum = 0;
	while (value > 0) {
		printf("value is %u\n", value);
		printf("sum is %u\n", sum);
		sum += value & 1;
		value >>= 1;
	}
}
