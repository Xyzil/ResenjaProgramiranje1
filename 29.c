#include <stdio.h>

int zbir(int x) {
	
	if (x < 0) x = -x;
	
	int cnt = 1;
	
	while (cnt * 10 < x) cnt *= 10;
	
	return (x / cnt) + (x % 10);
}

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", zbir(n));
	
	return 0;
}
	
