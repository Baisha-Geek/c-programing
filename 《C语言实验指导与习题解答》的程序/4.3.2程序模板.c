#include<stdio.h>
int main()
{
	int DA,MO,GU;
	float ZJG;
	printf("�����빺���ӡֽ��ī�С����̵�������");
	scanf("%d%d%d",&DA,&MO,&GU);
	ZJG=18*DA+132*MO+4.5*GU;
	if(ZJG>500)
	{
	    ZJG=ZJG*0.9;
	 	printf("Ӧ�����%.2f",ZJG);
	}
	else if(ZJG>400)
	{
	    ZJG=ZJG*0.92;
	    printf("Ӧ�����%.2",ZJG);
	}
	else if(ZJG>300)
	{
	    ZJG=ZJG*0.93;
  	    printf("Ӧ�����%.2f",ZJG);
	}
	else if(ZJG>200)
	{
	    ZJG=ZJG*0.94;
	 	printf("Ӧ�����%.2f",ZJG);
	}
	else if(ZJG>100)
	{
	    ZJG=ZJG*0.95;
	 	printf("Ӧ�����%.2f",ZJG);
	}
	else
	{
		printf("���������� ��ӡֽ��%d ī�У�%d ���̣�%d\nӦ�����%f",DA,MO,GU,ZJG);
	}
}
