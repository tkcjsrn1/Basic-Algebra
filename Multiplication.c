#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, c, k,temp, temp2, temp3, temp4, temp5, temp6;

	scanf("%d %d", &i, &j);

	temp = j;

	temp %= 10;
	
	temp2 = i;

	temp2 *= temp;

	temp3 = j;

	temp3 /= 10;
	temp3 %= 10;

	temp4 = i;

	temp3 *= temp4;

	temp5 = j;

	temp5 /= 100;
	
	temp6 = i;

	temp5 *= temp6;

	printf("%d\n", temp2);
	printf("%d\n", temp3);
	printf("%d\n", temp5);
	printf("%d\n", i * j);

}
