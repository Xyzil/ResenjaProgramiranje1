#include <stdio.h>
#include <ctype.h>

int konverzija(char x) {
	
	return (x % 10);
}
	

int main() {
	
	char c;
	
	while (scanf("%c", &c) != EOF) {
		printf("%d", konverzija(c));
	}
	
	//printf('\n');
	return 0;
}
	
	
