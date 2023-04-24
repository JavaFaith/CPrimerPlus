#include <stdio.h>
int main (void)
{
	float weight;	//你的体重
	float value;	//相同重量的白金价值
	
	printf("Are you worth you weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");
	
	//获取输入
	//&weight告诉scanf()把输入的值赋给名为weight的变量
	//scanf()函数使用&符号表明找到weight变量的地点
	scanf("%f",&weight);
	//假设白金的价格是每盎司$1700
	//14.5833用于把英镑常衡盎司转换为金衡盎司
	value = 1700 * weight * 14.5833;
	//%.2f中的.2用于精确控制输出，指定输出的浮点数只显示小数点后面两位
	printf("You weight in platinum is worth $%.2f.\n",value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	
	return 0;
}