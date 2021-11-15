#include <stdio.h>

int main() {
	
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	
	int mx = a;
	
	if (b > mx) mx = b;
	if (c > mx) mx = c;
	
	printf("%d", mx);
	
	return 0;
}
