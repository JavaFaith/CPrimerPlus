//�ڶ��±����ϰ
//Author Snippet Wan
//2023-04-23
#include <stdio.h>
int main(void)
{
	//��дһ�����򣬵���һ��printf()����������������մ�ӡ��һ�С�
	//�ٵ���һ��printf()����������������շֱ��ӡ�����С�
	//Ȼ���ٵ�������printf()����������������մ�ӡ��һ�С�
	//���Ӧ������ʾ����ȻҪ��ʾ�������ݻ���������֣�
	printf("Snippet Wan\n");
	printf("Snippet\nWan\n");
	printf("Snippet ");
	printf("Wan\n");
	
	//��дһ�����򣬴�ӡ��������͵�ַ��
	printf("My name is Snippet Wan\n");
	printf("My address is Nanjing city\n");
	
	
	//��дһ�����򣬴�ӡ��������͵�ַ��
	int age = 30;
	int days = age * 365;
	printf("my age is %d,total days are %d\n",age,days);
	
	//��дһ�������������������
	/*
	*For he's a jolly good fellow!
	*For he's a jolly good fellow!
    *For he's a jolly good fellow!
    *Which nobody can deny!
	*/
	//����main()�������⣬�ó���Ҫ���������Զ��庯����һ����Ϊjolly()��
	//���ڴ�ӡǰ3����Ϣ������һ�δ�ӡһ������һ��������Ϊdeny()����ӡ���һ����Ϣ
	int jolly(void)
	{
		printf("For he's a jolly good fellow!\n");
		return 0;
	}
	
	int deny(void)
	{
		printf("Which nobody can deny!\n");
		return 0;
	}
	
	
	
	jolly();
	jolly();
	jolly();
	deny();
	
	//��дһ�������������������
	//Brazil, Russia, India, China
	//India, China
	//Brazil, Russia
	//����main()���⣬�ó���Ҫ���������Զ��庯����һ����Ϊbr()��
	//����һ�δ�ӡһ�Ρ�Brazil, Russia����
	//��һ����Ϊic()������һ�δ�ӡһ�Ρ�India, China��������������main()���������
	
	int br(void)
	{
		printf("Brazil, Russia");
		return 0;
	}
	int ic(void)
	{
		printf("India, China");
		return 0;
	}
	printf("Brazil, Russia, India, China\n");
	ic();
	printf("\n");
	br();
	printf("\n");
	
	//6����дһ�����򣬴���һ�����ͱ���toes������toes����Ϊ10��
	//�����л�Ҫ����toes��������toes��ƽ�����ó���Ӧ��ӡ3��ֵ�����ֱ�������ʾ���֡�
	int toes = 10;
	int doubleToes = 10 * 2;
	int sqrtToes = 10 * 10;
	printf("The doubleToes is %d,The sqrtToes is %d\n",doubleToes,sqrtToes);
	
	
	//7������о�������΢Ц�洦��ࡣ��дһ�������������¸�ʽ�������
	//Smile!Smile!Smile!
	//Smile!Smile!
	//Smile!
	//�ó���Ҫ����һ���������ú���������һ�δ�ӡһ�Ρ�Smile!�������ݳ������Ҫʹ�øú�����
	int smile(void)
	{
		printf("Smile!");
		return 0;
	}
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
	
	//8����C�����У��������Ե�����һ����������дһ������
	//����һ����Ϊone_three()�ĺ������ú�����һ�д�ӡ���ʡ�one����
	//�ٵ��õ�2������two()��Ȼ������һ�д�ӡ���ʡ�three����
	//two()������һ����ʾ���ʡ�two����
	//main()�����ڵ���one_three()����ǰҪ��ӡ���starting now:����
	//���ڵ�����Ϻ���ʾ���done!������ˣ��ó�������Ӧ������ʾ��
	//starting now:
	//one
	//two
	//three
	//done!
	int two(void){
		printf("two\n");
		return 0;
	}
	
	int one_three(void)
	{
		printf("one\n");
		two();
		printf("three\n");
		return 0;
	}
	
	
	printf("Starting now :\n");
	one_three();
	printf("done!");
	
	return 0;
}

