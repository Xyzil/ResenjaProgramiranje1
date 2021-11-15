#include <stdio.h>

int main() {
	
	char op;
	char a, b, c, d;
	
	scanf("%c %c%c%c%c", &op, &a, &b, &c, &d);
	
	if (op != 'C' && op != 'V') {
		printf("-1");
		return 1;
	}
	
	int ans = 0;
	
	if (op == 'C') {
		ans = 1;
		int cnt = 0;
		if ('0' <= a && a <= '9') {
			ans *= (a-48);
			cnt++;
		}
		if ('0' <= b && b <= '9') {
			ans *= (b-48);
			cnt++;
		}
		if ('0' <= c && c <= '9') {
			ans *= (c-48);
			cnt++;
		}
		if ('0' <= d && d <= '9') {
			ans *= (d-48);
			cnt++;
		}
		
		if (cnt == 0) ans = 0;
	}
	
	if (op == 'V') {
		ans += (('A' <= a && a <= 'Z') ? 1 : 0);
		ans += (('A' <= b && b <= 'Z') ? 1 : 0);
		ans += (('A' <= c && c <= 'Z') ? 1 : 0);
		ans += (('A' <= d && d <= 'Z') ? 1 : 0);
	}
	
	printf("%d\n", ans);
	
	return 0;
}
