#include<stdio.h>
int age(int n)
{
    int c;
    if(n==1)
        c=10;
    else
    	c=age(n-1)+2;
    return c;
}
int main()
{
    int a,n=5;
    a=age(n);
    printf("��5λѧ����������%d",a);
    return 0;
}

