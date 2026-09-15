#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter 1st side: ");
	scanf("%d",&side1);
	printf("Enter 2nd side: ");
	scanf("%d",&side2);
	printf("Enter 3rd side: ");
	scanf("%d",&side3);
	if(side1<side2+side3&&side2<side1+side3&&side3<side1+side2)
	{
	{printf("\nValid triangle");}
	 if(side1==side2==side3)
	 {printf("\nEqualateral triangle");}
	 else if(side1==side2&&side1!=side3||side3==side1&&side3!=side2||side2==side3&&side2!=side1)	 
	{printf("\nisosceles triangle");}
	 else {printf("\nscalene triangle");}
	}
	else printf("\nInvalid triangle");
	return 0;
}
