#include<stdio.h>
int main() {
	int i=0, j=0, k, sum=1;
	
	scanf("%d %d", &i, &j);
	
	for(k=0; k<j; k++){
		sum *=i;
	}
	printf("%d",sum);
	
}
