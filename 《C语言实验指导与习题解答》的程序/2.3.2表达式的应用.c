#include<stdio.h>
#define PI 3.14159 
main()
{   
	float r,h,s,v;
	printf("Please input r,h:\n");
	scanf("%f%f",&r,&h);
	s=PI*r*r;
	v=r*r*PI*h/3;
	printf("����� = %.2f    Բ׶��� = %.2f",s,v);
	
}
