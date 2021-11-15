#include <stdio.h>
#include <math.h>

int main() {
	
	float r;
	
	scanf("%f", &r);
	
	float V = 4/3.0 * pow(r,3) * M_PI;
	
	printf("%.3f", V);
	
	return 0;
	
}
