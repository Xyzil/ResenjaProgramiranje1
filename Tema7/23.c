#include <stdio.h>
#include <ctype.h>

int main() {
	
	char c;
	
	int x = 0, b = 0;
	
	while ((c = getchar()) != EOF) {
		
		if (c == '[') x++;
		else if (c == ']') x--;
		
		if (x < 0) {
			b = 1;
			break;
		}
	}
	
	if (x || b) {
		printf("0");
	}
	else printf("1");

	return 0;
}
