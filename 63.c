#include <stdio.h>

int main() {
	
	int x;
	
	int j = 0, sum = 0;
	while (scanf("%d", &x) != EOF) {
		
		int n = x;
		if (n < 0) n = -n;
		j = n % 10;
		n /= 10;
		sum = 0;
		
		while (n != 0) {
			sum += (n % 10);
			n /= 10;
		}
		
		if (j > sum) {
			printf("%d ", x);
		}
		
	}
	
	return 0;
}
		
		
