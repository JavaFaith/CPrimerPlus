//toobig.c --超出系统允许的最大int值
#include <stdio.h>

int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;
	
	//可以把无符号整数j看作是汽车的里程表。
	//当达到它能表示的最大值时，会重新从起始点开始。整数i也是类似的情况。
	printf("%d %d %d\n",i,i+1,i+2);
	printf("%u %u %u\n",j,j+1,j+2);
	
	return 0;
}