#include <stdio.h>

int main() {
	
	long long x, n;
	
	scanf("%lld%lld", &x, &n);
	
	if (n < 0) {
		printf("-1");
		return 1;
	}
	
	long long zbir = 1, c = x;
	
	for (int i = 1; i <= n; ++i) {
		zbir += x;
		x *= c;
		//printf("%lld %lld", zbir, x);
		//printf("\n");
	}
	
	printf("%lld", zbir);
	
	return 0;
}
