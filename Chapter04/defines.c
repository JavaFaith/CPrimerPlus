//2023-07-11
//defines.c -- 使用limit.h和float头文件中定义的明示变量
#include <stdio.h>
#include <limits.h>	//整型限制
#include <float.h>	//浮点型限制
int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n",INT_MAX);
	//LLONG_MIN 符合C99标准才能展示，%lld\n，中间是英文字母l，不是数字1
	printf("Smallest long long: %lld\n",LLONG_MIN);
	printf("One byte = %d bits on this system.\n",CHAR_BIT);
	printf("Largest double:%e\n",DBL_MAX);
	printf("Smallest normal float:%e\n",FLT_MIN);
	printf("float precision = %d digits\n",FLT_DIG);
	printf("float epsilon = %e\n",FLT_EPSILON);
	
	return 0;
}