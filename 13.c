#include <stdio.h>

int main() {
	
	int x;
	
	scanf("%d", &x); 
	
	if (x < 0) x = -x;
	if (x < 1000 || x > 9999) {
		printf("-1");
		return 1;
	}
	int j, d, s, h, a = 0;
	
	j = x % 10;
	d = (x/10) % 10;
	s = (x/100) % 10;
	h = x / 1000;
	
	if (!(j&1)) a++;
	if (d&1) a++;
	if (!(s&1)) a++;
	if (h&1) a++;
	
	printf("%d", a);
	
	return 0;
}
