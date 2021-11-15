#include <stdio.h>

#define ll long long int 

int main() {
	
	ll x;
	
	scanf("%lld", &x);
	
	ll y = x % 100;
	
	x /= 1000;
	
	x*= 100;
	
	x+= y;
	
	printf("%lld", x);
	
	return 0;
	
}
