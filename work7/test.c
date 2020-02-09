#include<stdio.h>
int fib(int n)
{
	if(n<=2)
		return 1;
	else 
		return fib(n-1)+fib(n-2);
	
}
int main()
{
   int b=5;
   int sum;

	sum=fib(b);
	printf("%d",sum);
	return 0;
}