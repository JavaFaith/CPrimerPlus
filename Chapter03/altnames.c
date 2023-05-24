//Date 2023/05/24
//Author snippet Wan
/*altnames.c --可移植整数类型名*/
#include <stdio.h>
#include <inttypes.h>	//支持可移植类型
int main(void)
{
	int32_t me32;		//me32是一个32位有符号整数变量
	
	me32 = 45933945;
	printf("First,assume int32_t is int: ");
	printf("me32 = %d\n",me32);
	printf("Next,let's not make any assumption.\n");
	printf("Instead,use a \"macro\" from inttypes.h: ");
	//参数PRId32被定义在inttypes.h中的"d"替换，因而这条语句等价于
	//printf("me32 = %" "d" "\n", me32);
	//可以把多个连续的字符串组合成一个字符串，所以这条语句又等价于：
	//printf("me32 = %d\n", me32);
	printf("me32 = %"PRId32"\n",me32);
	
	return 0;
	
}
