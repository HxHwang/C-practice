#include <stdio.h>
int main()
{
	int x; 
	int n;
	
	printf("����������");
	scanf("%d" , &x);
	n++;
	x /=10;
	while(x>0){
		n++;
		x /=10;
		
	}
	printf("����λ��Ϊ%d" , n);
}
