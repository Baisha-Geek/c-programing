#include <stdio.h>
int main()
{
    int a, b = 0xf, c;
    printf("����һ��ʮ�������� a: \n");
    scanf("%x", &a);
    c = a ^ b;
    printf("a��ת�����Ϊ: %x \n",c);
    return 0;
}
