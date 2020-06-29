#include<stdio.h>

int n;

int Fibonacci(int num, int num2)
{
	int i = 0,j = 1,count = n;
	
	num = 0,num2 = 1; 
	
	while(0 <= n)
	{	
		count -= 2;
		
		if(n % 2 == 0 && count == -2)
		{
			if(n == 0)
				return 0;
				
			return i;
		}
		
		else if(n % 2 != 0 && count == -1)
		{
			if(n == 1)
				return 1;
				
			return j;
		}	
		
		i = num + num2,num = i;
		j = num2 + i,num2 = j;
				
	}
}

int main(void)
{
	const int startnum = 0, startnum2 = 1;
	
	printf("숫자를 입력하시오:");
	scanf("%d",&n);
	
	printf("%d",Fibonacci(startnum, startnum2));
	return 0;
}
