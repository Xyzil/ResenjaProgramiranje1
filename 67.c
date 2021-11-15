#include <stdio.h>

int main() {
	
	int n;
	
	while (scanf("%d", &n) != EOF) {
		
		if (n < 0) {
			printf("-1");
			return 1;
		}
		if (n < 10) {
			printf("%d ", n);
			continue;
		}
		
		int c = 1, x = n;
		while (x % c != x) {
			c *= 10;
		}
		
		c /= 10;
		int l = x / c, r = x % 10, mid = (x % c) / 10;
		
		printf("%d ", c * r + (mid*10) + l);
		
		
	}
	
	return 0;
}


// 12345
  //0l   r
