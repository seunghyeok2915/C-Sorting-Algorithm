#include <stdio.h>

int number =10;
int data[10] = { 3,7,8,1,5,9,6,10,2,4};

void quickSort(int *data,int start,int end) {
	if ( start >= end) { // 원소가 1개인 경우  
		return;
	}
	
	int key = start; // 키는 첫번째 원소  
	int i = start +1;
	int j = end;
	int temp;
	
	while(i <= j) { // 엇갈릴때 까 지  
		while (data[i] <= data[key]) { // 키값보다 큰 값이 나올떄까 지  
			i++;
		} 
		while(data[j] >= data[key] && j > start) { //키값보다 작은 값을 만날떄까지  
			j--;	
		} 
		if(i > j) { //엇갈린 상태면 키값과 교체 
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
