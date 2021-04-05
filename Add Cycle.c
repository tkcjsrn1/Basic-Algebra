#include <stdio.h>
int main() {
	int i, j, temp1, temp2, temp3,sum=0,cnt=0;
	scanf("%d",&i);
	temp3 = i; // 여기서 입력 값을 temp3에 넣어줘서 temp3의 값을 미리 증진시킨다. 
	while(1){
		temp1 = temp3;  //십의 자리 
		temp2 = temp3;  //일의 자리 
	
		temp1 /= 10; // 십의 자리의 숫자가 들어있음 
		temp2 %= 10; // 일의 자리의 숫자가 들어있음 
	
		sum = temp1 + temp2; // 입력값 더하기. 
		
		sum %= 10;  //%10으로 나중에 10보다 큰 값 들어왔을 때 대비. 
		
		temp3 = temp2 * 10; // 일의 자리로 만들었던 십의 자리를 다시 십의 자리로  
		
		temp3 = temp3 + sum; // 십의 자리 + 일의 자리 
		
		cnt++; // 카운트 + 
		
		if(temp3==i){ //무한 루프 탈출 
			break;
		}
	}
	printf("%d\n",cnt);	// 사이클 카운트 세기 
	}
