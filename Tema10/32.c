#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0 || n > 100) {
		printf("-1");
		return 1;
	}
	
	int a[101] = {0};
	
	for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
	
	int sum[101] = {0};
	
	for (int i = 1; i <= n; ++i) {
		sum[i] = a[i] + sum[i-1];
		printf("%d ", sum[i]);
	}
	
	return 0;
}
