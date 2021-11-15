#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("-1");
		return 1;
	}
	
	int ms = 0, br = 0;
	
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		if (x < 0) x = -x;
		
		if (x < 1000 || x > 9999) {
			printf("-1");
			return 1;
		}
		
		if ((x/100) % 10 >= ms) {
			ms = (x/100) % 10;
			br = x;
		}
	}
	
	int z = (br / 1000) + ms + ((br / 10) % 10) + (br % 10);
	
	printf("%d\n", z);
	
	return 0;
}
	
	
			
