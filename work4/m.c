#include<stdio.h>
#include<time.h>
#include<stdlib.h>
 void play()
 {
	 int num=rand()%100+1;
	 int input=0;
	 while(1)
	 {
	 printf("please enter your number:");
	 scanf("%d",&input);
	 if(input>num)
	 {
		 printf("bigger");
	 }
	 else if(input<num)
	 {
		 printf("smaller");
	 }
	 else
	 {
		 printf("right!");
		 break;
	 }
	 }
 }
 
	
 
	 
int main()
{
	while(1)
	{
	 int input=0;
	 printf("**************************\n");
	 printf("********1.play************\n");
	 printf("********2.exit************\n");
	 printf("**************************\n");
	 printf("please enter");
	 scanf("%d",&input);
	 switch(input)
	 {
	 case 1:
		 play();
		 break;
	 case 2:
		 break;
     default:
		 printf(" please enter again");
		 break;
	 }
	}
}

