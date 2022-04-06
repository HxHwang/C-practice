#include <stdio.h>
int main()
{
	const int pass;
	printf("请输入您的成绩");
	scanf("%d" , &pass);
	if(pass>60)
	printf("恭喜您及格了\n");
	else
	printf("您没及格\n");
	printf("再见\n") ;
}
