#include<stdio.h>

int main()
{
	int i,j,temp;
	int arr[10]={10,5,1,9,3,7,4,2,6,8};
	
	for(i = 0; i < 10; i++)
	{
		for(j = i; j < 10; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(i = 0; i <10; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
