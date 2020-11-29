#include<stdio.h>
#define size 9

int list[size];

void merge(int arr[], int a, int mid, int b)
{
	int i = a,k = a;
	int j = mid + 1;
	int t = 0;

	while(i <= mid && j <= b)
	{
		if(arr[i] <= arr[j])
		{
			list[k] = arr[i];
			i++;
		}
		
		else
		{
			list[k] = arr[j];
			j++;
		}
		k++;
	}
	
	if(i > mid)
	{
		for(t = j; t <= b; t++)
		{
			list[k] = arr[t];
			k++;
		}	
	}
	else
	{
		for(t = i; t <= mid; t++)
		{
			list[k] = arr[t];
			k++;
		}
	}
	
	for(t = a; t <= b; t++)
	{
		arr[t] = list[t];
	}
}

void sort(int arr[], int a, int b)
{
	if(a < b)
	{
		int mid = (a + b) / 2;
		sort(arr,a,mid);
		sort(arr,mid+1,b);
		merge(arr,a,mid,b);	
	}
}

int main()
{
	int arr[size] = {9,4,7,2,5,3,1,6,8};
	int i;
	
	sort(arr,0,size - 1);
	
	for(i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
