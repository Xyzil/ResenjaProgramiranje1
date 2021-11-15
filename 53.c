#include <stdio.h>

int main() {
	
	int x, p, d;
	
	scanf("%d/%d-%d", &x, &p, &d);
	
	//printf("%d %d %d", x, p, d);
	
	int z = 0;
	
	if (x % 10 == 4 || x % 10 == 5 || x % 10 == 6) {
		while (d != 0) {
			z += (d % 10)*(d % 10);
			d /= 10;
		}
		while (p != 0) {
			z += (p % 10)*(p % 10);
			p /= 10;
		}
		
	}
	if (x % 10 == 0 || x % 10 == 1 || x % 10 == 8) {
		while (p != 0) {
			z += (p % 10);
			p /= 10;
		}
	}
	if (x % 10 == 2 || x % 10 == 3 || x % 10 == 9) {
		while (d != 0) {
			z += (d % 10);
			d /= 10;
		}
	}
	
	printf("%d\n", z);
	
	return 0;
}
