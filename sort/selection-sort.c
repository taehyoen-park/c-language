#include<stdio.h>

int main()
{
	int i,j,index,temp,min;
	int arr[10]={10,5,1,9,3,7,4,2,6,8};
	
	for(i = 0; i < 10; i++)
	{
		min = 9999999;
		for(j = i; j < 10; j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	for(i = 0; i <10; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
