#include <stdio.h>
#include <limits.h>

int main() {
	
	int n;
	
	scanf("%d", &n); 
	
	if (n <= 0 || n > 50) {
		printf("-1");
		return 1;
	}
	
	int a[n][n];
	int m = INT_MIN;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
			if (i == 0 || i == n-1 || j == 0 || j == n-1) {
				if (m < a[i][j]) m = a[i][j];
			}
		}
	}
	
	printf("%d\n", m);
	
	return 0;
}
