#include<stdio.h>
#define N 10
struct child
{
	int no;
	int next;
};
struct child link[N];
int main()
{
	int i,n,m,s,count,h;
	printf("����ΧȦ��������Ȧ��������ʼ����λ�ã�");
	scanf("%d %d %d", &n, &m, &s);
	for (i=1; i<=n; i++)
	{
		if (i == n)
		   link[i].next=1;
		else
		   link[i].next=i+1;
		link[i].no = i;      
	}
	count = 0;
	if(s == 1)
	   h = n;
	else
	   h = s-1;
	printf("��Ȧ˳��Ϊ��");
	while(m < n - 1)
	{
		i = 0;
		while(i !=m )
		{
			h=link[h].next;
			if(link[h].no)
			   i++;
		}
		printf("%d, ", link[h].no);
		link[h].no = 0;
		count++;
	}
	for(i=1; i<=n; i++)
	if(link[i].no != 0)
	   printf("%d", count);   
	return 0;
}

