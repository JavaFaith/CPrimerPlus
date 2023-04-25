//2023-04-25
//演示printf()一些特性
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf("Doing it right:");
	printf("%d minus %d is %d\n",ten,two,ten-two);
	printf("Doing it wrong:");
	//第1个%d对应ten的值，但是由于没有给后两个%d提供任何值，
	//所以打印出的值是内存中的任意值
	printf("%d minus %d is %d\n",ten);//遗漏两个参数
	
	return 0;
}