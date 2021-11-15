#include <stdio.h>
#include <ctype.h>

int prebroj_manje(int x) {
	
	int l, cnt = 0;
	
	while (scanf("%d", &l) != EOF) {
		if (l < x) cnt++;
	}
	
	return cnt;
}

int main() {
	
	int x;
	
	scanf("%d", &x);
	
	printf("%d", prebroj_manje(x));
	
	return 0;
	
}
