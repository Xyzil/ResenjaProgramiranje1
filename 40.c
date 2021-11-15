#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n); 
	
	if (n <= 0 || n > 50) {
		printf("-1");
		return 1;
	}
	
	int a[n][n];
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
			if (!(j&1)) sum += a[i][j];
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
