#include <stdio.h>
int main()
{
	int price=0;
	int bill=0;
	printf("���������Ľ��");
	scanf("%d" , &price);
	printf("����������Ʊ��");
	scanf("%d",&bill);
	if (bill>=price){
	printf("����%dԪ" ,bill-price);
	}else{
	printf("����Ǯ����");
	}
}
