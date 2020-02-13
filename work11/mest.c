#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{   
	int a = 0;
	int n = 0;
	int sum = 0;
	int temp = 0;
	int i = 0;
	scanf("%d", &a);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		temp = 10 * temp + a;
		sum = sum + temp;
	}
	printf("%d", sum);
	return 0;
}
