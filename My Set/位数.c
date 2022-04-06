#include <stdio.h>
int main()
{
	int x;
	int n;
	printf("请输入数字");
	scanf("%d" , &x);
	if(x>999)n=4;
	else if(x>99)n=3;
	else if(x>9)n=2;
	else if(x>0)n=1;
	printf("数字的位数是%d\n" , n);
}
