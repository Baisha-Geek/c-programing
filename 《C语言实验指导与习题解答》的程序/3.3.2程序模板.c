#include<stdio.h>
main()
{
	int h, f, x, y;
	printf("���õ����������ý�����:");
	scanf_s("%d%d", &h, &f);
	if (h> 0 && f> 0)
	{
		x = (4 * h - f) / 2;
		y = (f - 2 * h) / 2;
		printf("��:%d   ��:%d", x, y);
	}
	else
		printf("�������!\n");
}
 
