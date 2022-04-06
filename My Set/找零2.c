#include <stdio.h>
int main()
{
	int price=0;
	int bill=0;
	printf("请输入您的金额");
	scanf("%d" , &price);
	printf("请输入您的票面");
	scanf("%d",&bill);
	if (bill>=price){
	printf("找您%d元" ,bill-price);
	}else{
	printf("您的钱不够");
	}
}
