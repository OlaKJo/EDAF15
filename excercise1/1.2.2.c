#include <stdio.h>

int main(void)
{
	unsigned short us = 0;
	unsigned int ui = 0;
	unsigned long ul = 0;
	unsigned long long ull = 0;
	printf("%60s%10zu\n", "the number of bits used for unsigned short is", 8*sizeof(us));
	printf("%60s%10zu\n", "the number of bits used for unsigned int is", 8*sizeof(ui));
	printf("%60s%10zu\n", "the number of bits used for unsigned long is", 8*sizeof(ul));
	printf("%60s%10zu\n", "the number of bits used for unsigned long long is", 8*sizeof(ull));

}
