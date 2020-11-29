#include<stdio.h>

int compare(const void **a, const void **b)   
{
    int num1 = **(int **)a;    
    int num2 = **(int **)b;    

    if (num1 < num2)   
        return -1;      
    
    if (num1 > num2)    
        return 1;       
    
    return 0;    
}

int main()
{
	int temp2,i,j,n,k = 0,c = 1;
	int *arr[10001];
    int arr2[10001][2];
    
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d %d",&arr2[i][0], &arr2[i][1]);
	}
	
	for(i=0; i<n; i++){
        arr[i] = &arr2[i][1];
    }
    
    qsort(arr,n,sizeof(int*),compare);
    
    for(i=1; i<n; i++){
		for(j=i-1 ; j>=0; j--){
			if(*(arr[j]) == *(arr[j+1]) && *(arr[j]-1) > *(arr[j+1]-1)){
				temp2 = *(arr[j]-1);
				*(arr[j]-1) = *(arr[j+1]-1);
				*(arr[j+1]-1) = temp2;
			}
			else
				break;
		}
	}
    
    for(i = 1; i<n; i++)
	{
		if(*(arr[k]) <= *(arr[i]-1))
		{
			c++;
			k=i;
		}
	}
  
	printf("%d",c);
	
	return 0;
}
