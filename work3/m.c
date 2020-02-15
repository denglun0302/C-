#include<stdio.h>

#include<string.h>
int main()
{
	 char name[]="shoushou";
   char passworld[]="123456";
	int count=3;
	


	while(count>0)
	{
	char name_[32];
	char passworld_[32];
	printf("please enter your name:");
	scanf("%s",name_);
	printf("please enter your passworld:");
	scanf("%s",passworld_);
		if(0==strcmp(name,name_)&&0==strcmp(passworld,passworld_))
		{
			printf("success!");
			break;
		}
	    else
		{
			count--;
			printf("your passworld or name is wrong!");
			
			printf("you have %d times\n",count);
		}
		if(count<=0)
		{
			printf("you do not have chance,please start anew!");
			
			}

		}
	}


	