#include<stdio.h>
main()
{
	float x,y;
	printf("������x��ֵ��");
	scanf("%f", &x);
	if (x < 1)
		printf("y��ֵΪ%.2f", x);
	else if (x >= 10)
	{
		printf("y��ֵΪ%.2f",3*x-1);
	}
	else 
	{
		printf("y��ֵΪ%.2f",2*x-1);
	}
}
