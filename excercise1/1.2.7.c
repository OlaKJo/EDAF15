#include <stdio.h>
#include <stdbool.h>

void primes (int nbr_of_primes)
{
	int c = 1;
	for (int i = 2; c <= nbr_of_primes; i++) {
		bool prime = true;
		for (int j = 2; j <= i/2; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime) 
			printf ("prime %4d: %d\n", c++, i);
	}
}

void primes2 (int max_size)
{
	int c = 1;
	for (int i = 2; i < max_size; i++) {
		bool prime = true;
		for (int j = 2; j <= i/2; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime) 
			printf ("prime %4d: %d\n", c++, i);
	}
}

int main(void)
{
	primes2(1000);
	primes(100);
}
