#include <stdio.h>
int main() {
	int i, j, temp1, temp2, temp3,sum=0,cnt=0;
	scanf("%d",&i);
	temp3 = i; // ���⼭ �Է� ���� temp3�� �־��༭ temp3�� ���� �̸� ������Ų��. 
	while(1){
		temp1 = temp3;  //���� �ڸ� 
		temp2 = temp3;  //���� �ڸ� 
	
		temp1 /= 10; // ���� �ڸ��� ���ڰ� ������� 
		temp2 %= 10; // ���� �ڸ��� ���ڰ� ������� 
	
		sum = temp1 + temp2; // �Է°� ���ϱ�. 
		
		sum %= 10;  //%10���� ���߿� 10���� ū �� ������ �� ���. 
		
		temp3 = temp2 * 10; // ���� �ڸ��� ������� ���� �ڸ��� �ٽ� ���� �ڸ���  
		
		temp3 = temp3 + sum; // ���� �ڸ� + ���� �ڸ� 
		
		cnt++; // ī��Ʈ + 
		
		if(temp3==i){ //���� ���� Ż�� 
			break;
		}
	}
	printf("%d\n",cnt);	// ����Ŭ ī��Ʈ ���� 
	}
