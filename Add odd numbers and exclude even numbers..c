#include<stdio.h>
int main() {
	int i, j, k, m_sum=0, p_sum=0, temp1, la_sum=0;
	
	scanf("%d %d", &i, &j); //�Է� �ޱ�  
	
	for (k=i; k<=j; k++){  // ó�� �Է� ���� ������, �� ��°�� �Է��� ������ k++ 
		temp1 = k; // k ���� �ӽ� ������ temp1 ������ ����. ���� k�� i�� ���� ������ �ִ�. 
		if(temp1 % 2 == 0){ // temp1�� %2�� Ȧ ¦�� �Ǻ��Ѵ�. 
			m_sum = m_sum + k; // temp1�� ¦�� �� ��� m_sum�� k ���� ���Ѵ�. 
		}  
		else if (temp1 % 2 == 1){ // temp1�� %2�� Ȧ ¦�� �Ǻ��Ѵ�. 
			p_sum = p_sum + k; // temp1�� Ȧ�� �� ��� p_sum�� k ���� ���Ѵ�. 
		}
		i++; // i++�� i�� ���� ��ȯ 
	}
	la_sum = p_sum - m_sum; // p_sum - m_sum���� Ȧ¦�� ���� ��� 
	printf("%d",la_sum); // ��� 
}
