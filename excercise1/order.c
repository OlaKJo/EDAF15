#include "1.4.3.h"

void order(int* smaller, int* bigger)
{
	if(*smaller > *bigger) {
		swap(smaller, bigger);	
	}
}
