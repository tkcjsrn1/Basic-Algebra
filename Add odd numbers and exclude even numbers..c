#include<stdio.h>
int main() {
	int i, j, k, m_sum=0, p_sum=0, temp1, la_sum=0;
	
	scanf("%d %d", &i, &j); //입력 받기  
	
	for (k=i; k<=j; k++){  // 처음 입력 받은 수부터, 두 번째로 입력한 수까지 k++ 
		temp1 = k; // k 값을 임시 변수인 temp1 변수에 저장. 현재 k는 i의 값을 가지고 있다. 
		if(temp1 % 2 == 0){ // temp1에 %2로 홀 짝을 판별한다. 
			m_sum = m_sum + k; // temp1이 짝수 일 경우 m_sum에 k 값을 더한다. 
		}  
		else if (temp1 % 2 == 1){ // temp1에 %2로 홀 짝을 판별한다. 
			p_sum = p_sum + k; // temp1이 홀수 일 경우 p_sum에 k 값을 더한다. 
		}
		i++; // i++로 i의 값을 변환 
	}
	la_sum = p_sum - m_sum; // p_sum - m_sum으로 홀짝의 값을 계산 
	printf("%d",la_sum); // 출력 
}
