//Date 2023/05/24
//Author snippet Wan
/*altnames.c --����ֲ����������*/
#include <stdio.h>
#include <inttypes.h>	//֧�ֿ���ֲ����
int main(void)
{
	int32_t me32;		//me32��һ��32λ�з�����������
	
	me32 = 45933945;
	printf("First,assume int32_t is int: ");
	printf("me32 = %d\n",me32);
	printf("Next,let's not make any assumption.\n");
	printf("Instead,use a \"macro\" from inttypes.h: ");
	//����PRId32��������inttypes.h�е�"d"�滻������������ȼ���
	//printf("me32 = %" "d" "\n", me32);
	//���԰Ѷ���������ַ�����ϳ�һ���ַ�����������������ֵȼ��ڣ�
	//printf("me32 = %d\n", me32);
	printf("me32 = %"PRId32"\n",me32);
	
	return 0;
	
}
