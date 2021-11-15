#include <stdio.h>

int main() {
	
	long long x;
	
	scanf("%lld", &x);
	
	long long cnt = 1;
	
	if (x < 0) x = -x;
	
	while (cnt * 10 < x) cnt *= 10;
	//printf("%lld\n", cnt);
	while ((x%cnt)/10 != 0) {
		x %= cnt;
		//printf("%lld\n", x);

		cnt /= 100;
		x /= 10;
		//printf("%lld\n", x);

	}
	
	if (x < 10) {
		double b = x;
		printf("%.1lf", b);
	}
	else if (x > 9 && x < 100) {
		double m = (x % 10) + (x / 10);
		printf("%.1lf", m/2);
	}
	
	return 0;
}
		
