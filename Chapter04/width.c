//2023-07-12
/*width.c -- �ֶο���*/
//��1��ת��˵��%d�����κ����η������Ӧ����������������ֶο��ȵ�ת��˵������������ͬ��
//��Ĭ������£�û���κ����η���ת��˵�������������Ĵ�ӡ�����
//��2��ת��˵����%2d�����Ӧ��������Ӧ����2�ֶο��ȡ�
//��Ϊ����ӡ��������3λ���֣������ֶο����Զ������Է��������ĳ��ȡ�
//��3��ת��˵����%10d�����Ӧ����������10���ո���ȣ�
//ʵ�����������Ǻ�֮����7���ո��3λ���֣���������λ���ֶε��Ҳࡣ
//���һ��ת��˵����%-10d�����Ӧ��������ͬ����10���ո���ȣ�
//-���˵����ӡ������λ���ֶε����
#include <stdio.h>
#define PAGES 959
int main(void)
{
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);
	printf("*%10d*\n",PAGES);
	printf("*%-10d*\n",PAGES);
	
	return 0;
}