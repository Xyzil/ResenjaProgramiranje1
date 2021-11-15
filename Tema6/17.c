#include <stdio.h>

int main() {
	
	int x;
	
	scanf("%d", &x);
	
	if (x <= 0) {
		printf("-1");
		return 0;
	}
	
	long long f = 1;
	
	for (x; x > 0; x-= 2) {
		f*= x;
	}
	
	printf("%lld", f);
	
	return 0;
}
