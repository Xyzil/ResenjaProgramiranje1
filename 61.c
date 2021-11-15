#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0 || n % 2 == 0) {
		printf("-1");
		return 1;
	}
	
	double a[n][n];
	
	double sum = 0, c = 0, ans = 0;
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%lf", &a[i][j]);
		}
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			//printf("%d %d %lf ", i, j, a[i][j]);
			if (i == j) {
				c = a[i][j];
				continue;
			}
			sum += fabs(a[i][j]);
		}
		if (fabs(c) > sum) {
			for (int j = 0; j < n; ++j) ans += a[i][j];
			sum = c = 0;
		}
		else {
			printf("0");
			return 1;
		}
	}
	
		printf("%.2lf\n", ans);

	
	return 0;
}
		
			
