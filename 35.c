#include <stdio.h>

int main() {
	
	char f[101], d[101];
	
	scanf("%100s %100s", f, d);
	
	int cnt = 0;
	
	for (int i = 0; f[i] != '\0'; ++i) {
		if (f[i] == 'a' && d[i] != 't') cnt++;
		if (f[i] == 't' && d[i] != 'a') cnt++;
		if (f[i] == 'c' && d[i] != 'g') cnt++;
		if (f[i] == 'g' && d[i] != 'c') cnt++;
	}
	
	printf("%d", cnt); 
	//printf("f %s , d %s\n", f, d);
	
	return 0;
}
