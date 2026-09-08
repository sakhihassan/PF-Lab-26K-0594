#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks");
	scanf("%d",&marks);
	
	if(marks>100)
	printf("Enter marks below 100");
	else if(marks<0)
	printf("Enter marks above 0");
	else if(marks>=85)
	printf("Grade A");
	else if(marks>=70)
	printf("Grade B");
	else if(marks>=60)
	printf("Grade C");
	else if(marks>=50)
	printf("Grade D");
	else
	printf("Fail");
	return 0;
} 

