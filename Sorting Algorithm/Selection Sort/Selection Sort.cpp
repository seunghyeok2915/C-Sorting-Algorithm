#include <stdio.h> 

int main(void)
{
	int i ,j,min,index,temp; 
	int array[10] = { 3,7,8,1,5,9,6,10,2,4};
	for (i =0; i < 10; i++)
	{
		min = 999;
		for(j = i; j <10; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	} 
	for (i =0; i < 10; i++)
	{
		printf("%d", array[i]);
	}
	return 0;
}
