#include<stdio.h>
int N=6;
long function(int i)
{   
    /*
    static long f=1;
    f=f*i;
    return f;  */
    
    int n,sum=1;
    for(n=1;n<=i;n++)
    {
    	sum*=n;
	}
	return sum;
}
int main()
{
    int i;
    long product;
    for (i=1;i<N;i++)
    {
        product=function(i);
        printf("%d�Ľ׳��ǣ�%ld\n",i,product);
    }
    
}
  
/* �����Ŀ�����ʹ����static��̬������������һ����õ�f��ֵ��
   ���Ҹտ�ʼ�ڱ�д��ֻ�뵽����forѭ��ȥ��׳ˣ�  */ 
 
