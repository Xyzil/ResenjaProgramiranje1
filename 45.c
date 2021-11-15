#include <stdio.h>

int main() {
	
	char c;
	int a, b;
	
	scanf("%c %d %d", &c, &a, &b); 
	
	if (c != 'p' && c != 'n') {
		printf("-1");
		return 1;
	}
	
	if (a < 100 || a > 999) {
		printf("-1");
		return 1;
	}
	
	if (b < 100 || b > 999) {
		printf("-1");
		return 1;
	}
	
	int z = 0;
	
	if (c == 'n') {
		z = a % 10 + a / 100 + b % 10 + b / 100;
	}
	else if (c == 'p') {
		z = (a/10) % 10 + (b/10) % 10;
	}

	printf("%d\n", z); 
	
	return 0;
}
	
