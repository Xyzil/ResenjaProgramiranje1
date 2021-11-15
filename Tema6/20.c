#include <stdio.h>

int main() {
	
	int x;
	
	scanf("%d", &x);
	
	if (x <= 0 || x > 100) {
		printf("-1");
		return 1;
	}
	
	for (int i = 1; i <= x; ++i) {
		printf("~");
		if (i&1) {
			for (int j = 1; j <= i; ++j) {
				if (j&1) printf("1");
				else printf("0");
			}
		}
		else {
			for (int j = 1; j <= i; ++j) {
				if (j&1) printf("0");
				else printf("1");
			}
		}
		printf("~\n");

			
	}
	
	return 0;
}
