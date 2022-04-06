#include <stdio.h>
int main()
{
	int max;
	int a;
	int b;
	printf("请输入两个整数");
	scanf("%d %d" , &a,&b);
	if(a>b){
		max=a;
		printf("较大的值为%d\n",max);
	}else{
		max=b;
		printf("较大的值为%d\n",max);
	}
}
