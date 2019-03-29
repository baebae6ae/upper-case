#include<stdio.h>
int main()
{
	/* 영어 소문자를 대문자로 바꾸기*/
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
