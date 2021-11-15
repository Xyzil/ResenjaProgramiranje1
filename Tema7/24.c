#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	int f = 0, s = 1, t = 0;
	
	if (n <= 0) {
		printf("-1");
		return 1;
	}
	
	if (n == 1) {
		printf("0");
		return 0;
	}
	if (n == 2) {
		printf("0 1");
		return 0;
	}
	
	printf("0 1 ");
	
	for (int i = 3; i <= n; ++i) {
		t = f + s;
		printf("%d ", t); 
		f = s;
		s = t;
	}
	
	return 0;
}
