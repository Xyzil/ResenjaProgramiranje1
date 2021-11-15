#include <stdio.h>

int main() {
	
	int x;
	
	scanf("%d", &x);
	
	if (x <= 0) {
		printf("-1");
		return 1;
	}
	
	double d = 0;
	
	for (int i = 1; i <= x; ++i) {
		d += 1.0/i;
	}
	
	printf("%.6lf\n", (x / d));
	
	return 0;
}
	
