#include <stdio.h>
int main()
{
	const int young=18;
	int age;
	printf("请输入您的年龄");
	scanf("%d" ,&age);
	printf("您的年龄是%d\n", age);
	if (age<=young){
		printf("青春是短暂的，好好珍惜\n");
	}
	printf("及时行乐\n");
}
