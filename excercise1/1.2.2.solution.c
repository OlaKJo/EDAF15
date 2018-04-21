
#include <stdio.h>

int main(void)
{
	/*unsigned short value = ~0;*/
	/*unsigned int value = ~0;*/
	/*unsigned long value = ~0;*/
	unsigned long long value = ~0;
		
	int bits = 0;
	while (value) {
		/*printf("value is: %u\n", value);*/
		/*printf("value is: %lu\n", value);*/
		printf("value is: %llu\n", value);
		value >>= 1;
		bits++;
	}
	printf("number of bits: %d\n", bits);

	return 0;
}
