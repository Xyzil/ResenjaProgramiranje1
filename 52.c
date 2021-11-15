#include <stdio.h>
#include <limits.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("-1");
		return 1;
	}
	
	int md = 10, br = 0, id = INT_MAX;
	
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		if (x < 0) x = -x;
		
		if (x < 10000 || x > 99999) {
			printf("-1");
			return 1;
		}
		
		if ((x/10) % 10 < md) {
			md = (x/10) % 10;
			br = x;
		}
		//else if  ((x/10) % 10 > md && i) {
			//md = (x/10) % 10;
			//br = x;
		//}
	}
	
	int z = 1;
	
	while (br != 0) {
		z *= (br%10);
		br /= 10;
	}
	
	//int z = (br / 1000) + ms + ((br / 10) % 10) + (br % 10);
	
	printf("%d\n", z);
	
	return 0;
}
	
