#include <stdio.h>

int main() {
	
	int x;
	int j, s, mid;
	while (scanf("%d", &x) != 0) {
		if (x == 0) break;
		if (x < 1000 || x > 9999) {
			printf("-1");
			break;
		}
		
		j = x % 10;
		s = x / 1000;
		
		if (j % 2 == 0 && s % 2 == 0) {
			mid = (x % 1000) / 10;
			mid *= 10;
			printf("%d ", j*1000+mid+s);
		}
		else {
			mid = (x % 1000) / 10;
			printf("%d ", mid);
		}
	}
	return 0;
}
