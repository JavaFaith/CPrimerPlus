/*badcount.c -- 参数错误的情况 */
//2023/05/24
#include <stdio.h>
int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;
	
	printf("%d\n",n,m);//参数太多
	printf("%d %d %d\n",n);//参数太少
	printf("%d %d\n",f,g);//值的类型不匹配
	
	//C语言通过函数原型机制对函数个数和匹配类型检查
	//但是对printf()和scanf()不起作用，因为这两个函数参数可变
	return 0;
}