#include<stdio.h>
int main()
{
	int l, w, h;
	printf("���������ӵĳ������ߣ�\n");
	scanf("%d%d%d", &l, &w, &h);
	if (l == w && w==h && l==h)
		printf("��������������\n");
	else 
	    printf("�������ǳ�����\n");
	return 0;
}
