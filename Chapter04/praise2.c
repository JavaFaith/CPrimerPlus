//praise2.c
//2023-07-06
//如果编译器不识别%zd,尝试换成%u或%lu。
#include <stdio.h>
#include <string.h>	/*提供strlen()函数的原型*/
#define PRAISE "You are an extraordinary being"
//sizeof运算符，它以字节为单位给出对象的大小。strlen()函数给出字符串中的字符长度。
//因为1字节存储一个字符，
//读者可能认为把两种方法应用于字符串得到的结果相同，但事实并非如此
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