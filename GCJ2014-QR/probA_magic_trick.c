#include <stdio.h>

int main() {
	
	int i, j, k;
	int n, a, b, tmp, match, ans;
	int rec[17];

	scanf("%d", &n);
	for(k=1;k<=n;k++) {
		for(i=0;i<17;i++)
			rec[i] = 0;
		match = 0;
		scanf("%d", &a);
		for(i=0;i<4;i++) {
			for(j=0;j<4;j++) {
				scanf("%d", &tmp);
				if(i == a-1)
					rec[tmp] = 1;
			}
		}
		scanf("%d", &b);
		for(i=0;i<4;i++) {
			for(j=0;j<4;j++) {
				scanf("%d", &tmp);
				if(i == b-1 && rec[tmp]) {
					match++;
					ans = tmp;
				}
			}
		}

		printf("Case #%d: ", k);
		if(match == 1)
			printf("%d\n", ans);
		else if(match > 1)
			printf("Bad magician!\n");
		else
			printf("Volunteer cheated!\n");
	}

	return 0;

}
