#include<stdio.h>
int strl( const char*str)
{
	if(*str=='\0')
	{
		return 0;
	}
	else return 1+strl(str+1);
}

int strl2(const char*str)
{
	int x=0;
	while(str[x]!='\0')
	{
		x++;
	}
	return x;
}

int main()
{
	char *p="abcdef";
	int len=strl(p);
	int  m=strl2(p);
	printf("%d,%d",len,m);
	return 0;
}