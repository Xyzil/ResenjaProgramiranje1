#include <stdio.h>
#include <ctype.h>

int main() {
	
	char a,b,c,d,e;
	
	scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
	
	int z = 0;
	
	z+= (isdigit(a) ? a : 0);
	z+= (isdigit(b) ? b : 0);
	z+= (isdigit(c) ? c : 0);
	z+= (isdigit(d) ? d : 0);
	z+= (isdigit(e) ? e : 0);
	
	printf("%d", z);
	
	return 0;
	
}
