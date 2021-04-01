#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, na1, tan1, na2, tan2, na3, tan3, na4, tan4,gicha=0,max=0;
		
	scanf("%d", &na1);
	scanf("%d", &tan1);
	scanf("%d", &na2);
	scanf("%d", &tan2);
	scanf("%d", &na3);
	scanf("%d", &tan3);
	scanf("%d", &na4);
	scanf("%d", &tan4);

	gicha -= na1;
	gicha += tan1;
	if (gicha > max)
		max = gicha;
		
	gicha -= na2;
	gicha += tan2;
	if (gicha > max)
		max = gicha;
		
	gicha -= na3;
	gicha += tan3;
	if (gicha > max)
	
	max = gicha;
	gicha -= na4;
	gicha += tan4;
	if (gicha > max)
		max = gicha;

	printf("%d", max);

	
}
