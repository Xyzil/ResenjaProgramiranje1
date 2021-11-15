#include <stdio.h>

int main() {
	
	float a, b, h;
	
	scanf("%f%f%f", &a, &b, &h);
	
	float P = ((a+b)*h) / 2;
	
	printf("%.2f", P);
	
	return 0;

}
