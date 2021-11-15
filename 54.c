#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("-1");
		return 1;
	}
	int b = 0, t = 0;
	int x;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		
		if (x < 0) x = -x;
		
		if (x < 100 || x > 999) {
			printf("-1");
			return 1;
		}
		
		if (x/100 > (x/10)%10 && (x/10)%10 > x%10) {
			b = x;
			t = 1;
		}
	}
	
	if (t) {
		printf("%d", b%10);
	}
	else {
		printf("%d", x);
	}
	
	return 0;
}
