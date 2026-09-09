#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("d%",&num);
	int mod=num%2;
	if(mod==0)
	printf("\nThe num is even");
	else printf("\nThe num is odd");
	return 0;
}
