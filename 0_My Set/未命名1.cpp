#include <stdio.h>
int main()
{
	int n1,n2,grade;
	n1=n2=0;
	printf("ÊäÈë\n");
	scanf("%d",&grade);
	while(grade!=-1){
		if(grade>=60)n1++;
		else n2++;
		scanf("%d",&grade);
	}
	printf("%d\n%d\n",n1,n2);
 } 
