#include <stdio.h>
int main()
{
    int i, a = 0x00ff, b = 0xff00, c, d;
    printf("����һ������i:\n");
    scanf("%d", &i);
    c = i & a;
    d = i & b;
    printf("i�ĸ�λ��:%d,i�ĵ�λ��:%d \n", d, c);
    return 0;
}