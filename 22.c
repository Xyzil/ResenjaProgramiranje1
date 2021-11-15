#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("-1");
		return 1;
	}
	
	double x, p, dif = 0, od = 0;
	int t = 1, a = 1;
	scanf("%lf", &x);
	for (int i = 0; i < n-1; ++i) {
		scanf("%lf", &p);
		if (t) {
			dif = x / p;
			t = 0;
		}
		if (x * dif != p && x != dif * p) {
			a = 0;
			break;
		}/*
		if (dif - od != 0.0) {
			a = 0;
			break;
		}
		dif = x / p;
		x = p;
		if (t) {
			od = dif;
			t = 0;
		}
		*/
		x = p;
		//printf("%f %f %f\n", x, dif, od);
	}
	
	printf("%d\n", a);
	return 0;
}

		
	
