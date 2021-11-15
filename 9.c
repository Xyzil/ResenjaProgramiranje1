#include <stdio.h>

int main() {
	
	int x;
	
	scanf("%d", &x);
	
	int y = x % 10;
	
	x /= 10;
	
	x+= (y*1000);
	
	printf("%d", x);
	
	return 0;
	
}
