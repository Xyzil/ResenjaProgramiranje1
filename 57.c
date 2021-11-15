#include <stdio.h>

int main() {
	
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	if (n < 3 || m < 2) {
		printf("-1");
		return 1;
	}
	
	int a[n][m];
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			scanf("%d", &a[i][j]);
			if (a[i][j] < 0 || a[i][j] > 10) {
				printf("-1");
				return 1;
			}
			
		}
	}
	
	int s[n];
	
	int mx = 0;
	for (int i = 0; i < n; ++i) {
		s[i] = 0;
		for (int j = 0; j < m; ++j) {
			s[i] += a[i][j];
			//printf("%d ", s[i]);
		}
		//printf("\n");
		if (mx < s[i]) {
			mx = s[i];
		}
	}
	
	for (int i = 0; i < n; ++i) {
		if (s[i] == mx) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
		
			
