#include <stdio.h>

int main() {
	
	int x, sum = 0, p = 0;
	
	
	while (scanf("%d", &x) != EOF) {
		
		int y = x;
		if (y < 0) y = -y;
		
		while (y != 0) {
			sum += y % 10;
			y /= 10;
			++p;
		}
		if (p % 2 == 0 || sum % 2 == 0) {
			printf("%d ", x);
		}
		sum = p = 0;
	}
	
	return 0;
}
