#include <stdio.h>
int main()
{int price=0;
 int amounst=0;
 printf("请输入您的金额:");
 scanf("%d" , &price);
 printf("请输入您的票面");
 scanf("%d", &amounst);
 int change=amounst-price;
 printf("找您%d元" , change);
return 0;
}
