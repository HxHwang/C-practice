#include <stdio.h>
int main()
{
	int x; 
	int n;
	
	printf("请输入数字");
	scanf("%d" , &x);
	n++;
	x /=10;
	while(x>0){
		n++;
		x /=10;
		
	}
	printf("数字位数为%d" , n);
}
