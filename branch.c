#include<stdio.h>

void print();
void print2();


int main()
{
	printf("branch test");
	printf("print add");
	print();
	print2();
	return 0;
}

void print()
{
	printf("hello world");
}

void print2()
{
	printf("this is so perfect");
}