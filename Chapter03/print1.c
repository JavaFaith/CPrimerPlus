//2023-04-25
//��ʾprintf()һЩ����
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf("Doing it right:");
	printf("%d minus %d is %d\n",ten,two,ten-two);
	printf("Doing it wrong:");
	//��1��%d��Ӧten��ֵ����������û�и�������%d�ṩ�κ�ֵ��
	//���Դ�ӡ����ֵ���ڴ��е�����ֵ
	printf("%d minus %d is %d\n",ten);//��©��������
	
	return 0;
}