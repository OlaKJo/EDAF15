#include <stdio.h>
#include "1.4.3.h"

int main(void)
{
	int a = 0;
	int b = 0;
	printf("Please enter two integers: ");
	scanf("%d %d", &a, &b);
	order(&a, &b);
	printf("a is now %d, and b is now %d\n", a, b);
}
