#include<stdio.h>
int main()
{
	/* ���� �ҹ��ڸ� �빮�ڷ� �ٲٱ�*/
	char c[100];
	int i;
	printf("type: ");
	scanf("%s",c);
	for(i=0; i<100; i++)
	{
		if(c[i]=='\0')
		break;
		if(c[i]<='z' && c[i]>='a')
		{
			printf("%c",c[i] + 'A' - 'a');
		}
		else
		printf("%c",c[i]);
	}
	
	return 0;
}
