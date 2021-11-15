#include <stdio.h>

int main() {
	
	int a, b, c, d;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	int p = 1;
	
	p *= (a < 0 ? a : 1);
	p *= (b < 0 ? b : 1);
	p *= (c < 0 ? c : 1);
	p *= (d < 0 ? d : 1);
	
	printf("%d", p);
	
	return 0;
	
}
