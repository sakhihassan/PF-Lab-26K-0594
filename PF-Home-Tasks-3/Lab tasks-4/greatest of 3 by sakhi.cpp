#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter num1");
	scanf("%d",&a);
	printf("Enter num2");
	scanf("%d",&b);
	printf("Enter num3");
	scanf("%d",&c);
	if (a>b && a>c)
	printf("%d",a);
    else if (b>a && b>c)
	printf("%d",b);
	else printf("%d",c);
	return 0;
}
