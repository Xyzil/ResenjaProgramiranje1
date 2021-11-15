#include <stdio.h>

int main() {
	
	int a[100];
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0 || n > 100) {
		printf("-1");
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
	if (n == 1) {
		float z = a[0];
		printf("%.2f", z);
		return 0;
	}
	
	float x = (a[0]+a[n-1]+a[1]) / 3.0;
	printf("%.2f ", x);
	
	for (int i = 1; i < n - 1; ++i) {
		//printf("%d\n", a[i]);
		x = (a[i-1] + a[i] + a[i+1]) / 3.0;
		printf("%.2f ", x);
	}
	
	x = (a[0]+a[n-1]+a[n-2]) / 3.0;
	printf("%.2f ", x);
		
	return 0;
}
