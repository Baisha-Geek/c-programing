#include<stdio.h>
#include<string.h>
#define N 40
void main()
{
	char str[N],ch='Y';
	int i,len;
	printf("������һ���ַ�����");
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-1-i])
		{
			ch='N';
			break;
	 	} 
 	} 
 	if(ch=='Y')
 		printf("%s �ǻ���\n",str);
 	else
 		printf("%s ���ǻ���\n",str);
}
