#include <stdio.h>
#include <math.h>

int main(void)
{
double a[4] = {0,0.1,0.2,0.3};
	printf("%10s%10s%10s\n", "x", "sqrt", "exp");
	for(int i = 0; i < 4; i++) {
		double res1 = sqrt(a[i]);
		double res2 = exp(a[i]);
		printf("%10lf %10lf  %10lf\n", a[i], sqrt(a[i]), exp(a[i])); 
	}
	return 0;
}
