#include<stdio.h>
int main()
{
    int m,n,k;
    int sum=0;
    printf("�����Է����£�\n");
    for(m=1;m<=100;m++)
    {
        for(n=1;n<=100-m;n++)
        {
          k=100-m-n;
          if((k%2==0)&&(3*m+2*n+0.5*k==100))
          {
            printf("����%dƥ; ����%dƥ; С��%dƥ.\n",m,n,k);
            sum++;
          }
        }
    }
    printf("����%d���Է�.\n",sum);
}

