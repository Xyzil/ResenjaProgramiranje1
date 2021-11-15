#include <stdio.h>

int main() {
	
	int x;
	scanf("%d", &x);
	
	int z = 1;
	
	if (x < 0) {
		x = -x;
		z = -1;
	}
	
	if (x < 1000 || x > 9999) {
		printf("-1");
		return 0;
	}
	
	int j, d, s, h;
	
	j = x % 10;
	d = (x/10) % 10;
	s = (x/100) % 10;
	h = x / 1000;
	
	int mx = 0, c = 1;
	
	if (j > mx) {
		mx = j;
		c = 1;
	}
	if (d > mx) {
		mx = d;
		c = 10;
	}
	if (s > mx) {
		mx = s;
		c = 100;
	}
	if (h > mx) {
		mx = h;
		c = 1000;
	}
	
	x = x - c;
	
	printf("%d", x*z);
	return 0;
}
