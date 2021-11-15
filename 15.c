#include <stdio.h>

int main() {
	
	char c;
	
	scanf("%c", &c);
	
	char d = (c&1 ? c-1 : c+1);
	
	printf("%c", d);
	
	return 0;
}
