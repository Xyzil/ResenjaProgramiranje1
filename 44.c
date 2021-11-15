#include <stdio.h>

struct TAKMICAR {
	
	char ime[31];
	double poeni;
};

int main() {
	
	int n;
	scanf("%d", &n);
	
	if (n < 3 || n > 100) {
		printf("-1");
		return 0;
	}
	
	struct TAKMICAR t[n];
	
	int prvi = 0, drugi = 0, treci = 0; // id
	double first = 0, second = 0, third = 0; // poeni
	
	for (int i = 0; i < n; ++i) {
		scanf("%s", t[i].ime);/*
		for (int j = 0; t[i].ime[j] != ' '; ++j) {
			scanf("%s", &t[i].ime[j]);
		}*/
		scanf("%lf", &t[i].poeni);
		
		if (t[i].poeni < 0) {
			printf("-1");
			return 1;
		}
		
		if (t[i].poeni > first) {
			third = second;
			treci = drugi;
			
			second = first;
			drugi = prvi;
			
			first = t[i].poeni;
			prvi = i;
		}
		else if (t[i].poeni > second) {
			third = second;
			treci = drugi;
			
			second = t[i].poeni;
			drugi = i;
		} 
		else if (t[i].poeni > third) {
			third = t[i].poeni;
			treci = i;
		}
		
		//printf("%lf %lf %lf\n", first, second, third);
	}
	
	printf("%s %s %s", t[prvi].ime, t[drugi].ime, t[treci].ime);
		
	return 0;
}
	
	
