#include <stdio.h>
int main()
{int foot;
 int inch;
 printf("请输入尺寸");
 scanf("%d %d" , &foot,&inch);
 printf("您的身高为%f" , ((foot+inch/12.0)*0.3048));
}
