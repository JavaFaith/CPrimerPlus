/*typesize.c --打印类型大小*/
#include <stdio.h>
int main(void)
{
	/*C99为类型大小提供%zd转换说明*/
	printf("Type int is has a size of %zd bytes.\n",sizeof(int));
}