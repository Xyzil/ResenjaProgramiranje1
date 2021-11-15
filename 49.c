#include <stdio.h>

int main() {
	
	char op;
	char a, b, c, d, e;
	
	scanf("%c %c%c%c%c%c", &op, &a, &b, &c, &d, &e);
	
	if (op != 'C' && op != 'M') {
		printf("-1");
		return 1;
	}
	
	int ans = 0;
	
	if (op == 'C') {
		ans += (('0' <= a && a <= '9') ? a-48 : 0);
		ans += (('0' <= b && b <= '9') ? b-48 : 0);
		ans += (('0' <= c && c <= '9') ? c-48 : 0);
		ans += (('0' <= d && d <= '9') ? d-48 : 0);
		ans += (('0' <= e && e <= '9') ? e-48 : 0);
	}
	
	if (op == 'M') {
		ans += (('a' <= a && a <= 'z') ? 1 : 0);
		ans += (('a' <= b && b <= 'z') ? 1 : 0);
		ans += (('a' <= c && c <= 'z') ? 1 : 0);
		ans += (('a' <= d && d <= 'z') ? 1 : 0);
		ans += (('a' <= e && e <= 'z') ? 1 : 0);
	}
	
	printf("%d\n", ans);
	
	return 0;
}
