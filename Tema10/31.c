#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n < 2 || n > 100) {
		printf("-1");
		return 1;
	}
	
	int a[100];
	
	float p = 0, ne = 0;
	int sp = 0, sn = 0;
	float as = 0.0, ks = 0.0;
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	
	for (int i = 0; i < n; ++i) {
		if (i&1) {
			sn += (a[i] * a[i]);
			ne++;
			//printf("%d %f %d\n", i, ne, sn);
		}
		else {
			sp += a[i];
			p++;
			//printf("%d %f %d\n", i, p, sp);

		}
	}
	
	as = (sp / p);
	ks = sqrt(sn/ne);
	
	printf("%.2f", as+ks);
	
	return 0;
}
