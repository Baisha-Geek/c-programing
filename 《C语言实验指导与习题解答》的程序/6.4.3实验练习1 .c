#include<stdio.h>
long  getpower(int x, int y)
{
    if(y==1)
    {
     	return x;
    }
    else
    {
       return x*getpower(x,y-1);
    }
}
main()
{
    int x,y;
    long answer;
    printf("����һ����:");
    scanf("%d",&x);
    printf("�����ݴη�:");
    scanf("%d",&y);
    answer=getpower(x , y);
    printf("�����:%ld\n",answer);
}

