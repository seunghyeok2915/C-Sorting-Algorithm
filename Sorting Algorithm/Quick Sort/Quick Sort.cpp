#include <stdio.h>

int number =10;
int data[10] = { 3,7,8,1,5,9,6,10,2,4};

void quickSort(int *data,int start,int end) {
	if ( start >= end) { // ���Ұ� 1���� ���  
		return;
	}
	
	int key = start; // Ű�� ù��° ����  
	int i = start +1;
	int j = end;
	int temp;
	
	while(i <= j) { // �������� �� ��  
		while (data[i] <= data[key]) { // Ű������ ū ���� ���Ë��� ��  
			i++;
		} 
		while(data[j] >= data[key] && j > start) { //Ű������ ���� ���� ����������  
			j--;	
		} 
		if(i > j) { //������ ���¸� Ű���� ��ü 
			temp =data[j];
			data[j] = data[key];
			data[key] = temp; 
		} else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data,start,j-1);
	quickSort(data,j+1,end);
}
int main(void)
{
	quickSort(data,0,number -1);
	for (int i =0; i < number; i++)
	{
		printf("%d", data[i]);
	}
	return 0;
}
