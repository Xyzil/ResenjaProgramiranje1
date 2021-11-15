#include <stdio.h>

int main() {
	
	long long n;
	int i;
	
	scanf("%lld%d", &n, &i);
	
	if (n < 0 || i <= 0) {
		printf("-1");
		return 1;
	}
	
	long long c = 1;
	
	while (i != 0) {
		c *= 10;
		--i;
	}
	//printf("%lld\n", c);
	/*
	if (c > n) {
		printf("%lld", n);
		return 0;
	}
	*/
	long long d =  n % (c/10);
	n /= (c);
	//printf("%lld% lld\n", d, n);

	c /= 10;
	n *= c;
	//printf("%lld\n", n);

	n+= d;
	
	printf("%lld", n);
	return 0;
	
}
	
