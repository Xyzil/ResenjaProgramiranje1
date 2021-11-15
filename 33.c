#include <stdio.h>
#include <ctype.h>

int main() {
	
	char s[102], ans[102]; 
	
	
	scanf("%100s", s);
	
	int x = 0, t = 0;

	for (int i = 0; s[i] != '\0'; ++i) {
		if (('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')) {
			int l = s[i];
			while (l!=0) {
				x += (l%10);
				l /= 10;
			}
			while (x != 0) {
				t += (x%10);
				x /= 10;
			}
			//s[i] = 0;
			ans[i] = t + '0';
			//printf("%c\n", s[i]);
			t = x = 0;
			continue;
		}
		// dobro
		if (s[i] >= 48 && s[i] <= 57) {
			ans[i] = s[i] + 49; 
			continue;
		}
		ans[i] = s[i];
	}
	
	for (int j = 0; ans[j] != '\0'; ++j) {
		printf("%c", ans[j]);
	}
	return 0;
}
				
