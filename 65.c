#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0 || n > 100) {
		printf("-1");
		return 1;
	}
	
	int a[n][n];
	
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	
	int sum = 0;
	
	for (int i = 0; i < n; ++i) {
		sum += a[0][i];
	} 
	
	int cs = 0;
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cs += a[i][j];
		}
		if (cs != sum) {
			printf("0");
			return 1;
		}
		cs = 0;
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cs += a[j][i];
		}
		if (cs != sum) {
			printf("0");
			return 1;
		}
		cs = 0;
	}
	
	printf("%d", sum * n);

	return 0;
}
		
			
