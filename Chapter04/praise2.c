//praise2.c
//2023-07-06
//�����������ʶ��%zd,���Ի���%u��%lu��
#include <stdio.h>
#include <string.h>	/*�ṩstrlen()������ԭ��*/
#define PRAISE "You are an extraordinary being"
//sizeof������������ֽ�Ϊ��λ��������Ĵ�С��strlen()���������ַ����е��ַ����ȡ�
//��Ϊ1�ֽڴ洢һ���ַ���
//���߿�����Ϊ�����ַ���Ӧ�����ַ����õ��Ľ����ͬ������ʵ�������
int main(void)
{
	char name[40];
	
	printf("What's your name? ");
	scanf("%s",name);
	printf("Hello,%s. %s\n",name,PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
			strlen(name),sizeof name);
	printf("The phrase of praise has %zd letters ",
			strlen(PRAISE));
	printf("and occupies %zd memory cells.\n",sizeof PRAISE);
	
	return 0;
}