#include<stdio.h>
int main()
{
	int x,n,y;
	float sume=0.0;
	printf("��ѡ��1.����Ʒ      2.�ľ�         3.ʳƷ\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("��ѡ��1.��ˢ��3.5Ԫ/֧��  2.���ࣨ6.2Ԫ/֧��\n");
			printf("        3.����2Ԫ/�飩    4.ë��8.6Ԫ/����\n");
			scanf("%d",&y);
			printf("������"); 
			scanf("%d",&n);
			switch(y)
			{
				case 1: sume=n*3.5; break;
				case 2: sume=n*6.2; break;
				case 3: sume=n*2;   break;
				case 4: sume=n*8.6;	break;
			 } 
			 break;
		case 2:
			printf("��ѡ��1.�ʣ�3Ԫ/֧��         2.�ʼǱ���1.2Ԫ/����\n");
			printf("        3.�ļ��У�12Ԫ/����    4.�ľߺУ�8.6Ԫ/����\n");
			scanf("%d",&y);
			printf("������");
			scanf("%d",&n);
			switch(y)
			{
				case 1: sume=n*3;   break;
				case 2: sume=n*1.2; break;
				case 3: sume=n*12;  break;
				case 4:	sume=n*8.6; break;
			 } 
			 break;
 	    case 3:
			printf("��ѡ��1.���ǣ�3.6Ԫ/����  2.�Σ�1Ԫ/����\n");
			printf("        3.����2Ԫ/����      4.�����棨3.6Ԫ/����\n");
			scanf("%d",&y);
			printf("������");
			scanf("%d",&n);
			switch(y)
			{
				case 1: sume=n*3.6; break;
				case 2: sume=n*1;   break;
				case 3: sume=n*2;   break;
				case 4: sume=n*3.6; break;
			 } 
			 break;
	} 
	printf("�ܼƣ�%.2f Ԫ\n",sume);
	return 0; 
 } 
 
