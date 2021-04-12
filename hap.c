#include<stdio.h>
int main() {
	int i, j, k, sum=0;
	
	scanf("%d",&i);
	
	for(j=1; j<=i; j++){
		sum += j;
	}
	printf("%d",sum);
	
}
