#include<stdio.h>
main()
{
	int x,y,z,sum=0;
	for(x=1;x<29;x++)
	{
		for(y=1;y<30-x;y++)
		{
			z=30-x-y;
			if(3*x+2*y+z==50)
			{
				printf("��ѧ��%3d\t��ѧ��%3d\tСѧ��%3d\n",x,y,z);   //�������%d��d��ǰ��Ӹ�3�Ļ����ᵼ��������ַ������룻 
				sum+=1;
			}
			else
			    continue;
		}
	}
	printf("sum = %d\n",sum); 
}

/*���������õ��㷨�� 
#include<stdio.h> 
main()
{
	int x,y,z,sum=0;
	for(x=1;x<30;x++)
	{
		for(y=1;y<30;y++)
		{
			z=30-x-y;
			if(z!=0 && 3*x+2*y+z==50)
			{
				printf("��ѧ��%3d\t��ѧ��%3d\tСѧ��%3d\n",x,y,z);   
				sum+=1;
			}
			else
			    continue;
		}
	}
	printf("sum = %d\n",sum); 
}
*/ 
