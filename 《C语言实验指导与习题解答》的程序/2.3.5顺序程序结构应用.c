#include<stdio.h>
int main ()
{
	float x,j,c,hj,fk,zh,cw,g,f;
	printf("������ҩ�ѣ����ѣ����Ϸѣ���λ�ѣ��۲�ѣ�����ѣ�\n");
	scanf("%f%f%f%f%f%f",&x,&j,&c,&cw,&g,&f);
	hj=x+j+c+cw+g+f;
	printf("Ӧ���Ԫ����%.2f ",hj);
	printf("���˸��Ԫ����"); 
	scanf("%f",&fk);
	zh=fk-hj;
	printf("��������\n");
	printf("���˸��� = %6.2fԪ\nӦ�տ� = %6.2fԪ Ӧ�һ� = %6.2fԪ\n",fk,hj,zh);
	return 0; 
}
 
