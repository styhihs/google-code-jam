#include <stdio.h>

int main() {
	
	int t;
	int k;
	double c, f, x, coo_rate, ans;

	scanf("%d", &t);
	for(k=1;k<=t;k++) {
		ans = 0.0;
		coo_rate = 2.0;
		scanf("%lf %lf %lf", &c, &f, &x);
		while((x/coo_rate) > (c/coo_rate + x/(coo_rate+f))) {
			ans += c/coo_rate;
			coo_rate += f;
		}
		ans += x/coo_rate;
		printf("Case #%d: %.7lf\n", k, ans);
	}

	return 0;

}
