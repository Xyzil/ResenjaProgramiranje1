#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n); 
	
	int c = 1, rez = 1;
	int s = 0;
	for (int i = 0; i < 4; ++i) {
		s = (n/c) % 10;
		rez *= ((s % 2 == 0) ? s : 1);
		c*= 10;
	}
	
	printf("%d\n", rez*n);
	
	return 0;
}
