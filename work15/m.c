#include<stdio.h>
int main()
{
	int n=0;
	int count=0;
	scanf("%d",&n);
	while(n)
	{
		count++;
		n=n&(n-1);
	}
	printf("%d",count);
	return 0;
}