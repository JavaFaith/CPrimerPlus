//第二章编程练习
//Author Snippet Wan
//2023-04-23
#include <stdio.h>
int main(void)
{
	//编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。
	//再调用一次printf()函数，把你的名和姓分别打印在两行。
	//然后，再调用两次printf()函数，把你的名和姓打印在一行。
	//输出应如下所示（当然要把示例的内容换成你的名字）
	printf("Snippet Wan\n");
	printf("Snippet\nWan\n");
	printf("Snippet ");
	printf("Wan\n");
	
	//编写一个程序，打印你的姓名和地址。
	printf("My name is Snippet Wan\n");
	printf("My address is Nanjing city\n");
	
	
	//编写一个程序，打印你的姓名和地址。
	int age = 30;
	int days = age * 365;
	printf("my age is %d,total days are %d\n",age,days);
	
	//编写一个程序，生成以下输出：
	/*
	*For he's a jolly good fellow!
	*For he's a jolly good fellow!
    *For he's a jolly good fellow!
    *Which nobody can deny!
	*/
	//除了main()函数以外，该程序还要调用两个自定义函数：一个名为jolly()，
	//用于打印前3条消息，调用一次打印一条；另一个函数名为deny()，打印最后一条消息
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
	
	//编写一个程序，生成以下输出：
	//Brazil, Russia, India, China
	//India, China
	//Brazil, Russia
	//除了main()以外，该程序还要调用两个自定义函数：一个名为br()，
	//调用一次打印一次“Brazil, Russia”；
	//另一个名为ic()，调用一次打印一次“India, China”。其他内容在main()函数中完成
	
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
	
	//6．编写一个程序，创建一个整型变量toes，并将toes设置为10。
	//程序中还要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区分。
	int toes = 10;
	int doubleToes = 10 * 2;
	int sqrtToes = 10 * 10;
	printf("The doubleToes is %d,The sqrtToes is %d\n",doubleToes,sqrtToes);
	
	
	//7．许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
	//Smile!Smile!Smile!
	//Smile!Smile!
	//Smile!
	//该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。
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
	
	//8．在C语言中，函数可以调用另一个函数。编写一个程序，
	//调用一个名为one_three()的函数。该函数在一行打印单词“one”，
	//再调用第2个函数two()，然后在另一行打印单词“three”。
	//two()函数在一行显示单词“two”。
	//main()函数在调用one_three()函数前要打印短语“starting now:”，
	//并在调用完毕后显示短语“done!”。因此，该程序的输出应如下所示：
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

