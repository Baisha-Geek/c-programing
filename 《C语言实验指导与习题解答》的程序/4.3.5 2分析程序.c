#include<stdio.h>
int main()
{
	int num=20;
	if(5<num&&num<10)   //�� (5<num<10) �滻�� (5<num&&num<10)
	  printf("%d in rang (5,10)!\n",num);
	else
	  printf("%d out of rang (5,10)!\n",num); 
 } 
