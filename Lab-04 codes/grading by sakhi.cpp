#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	
	if(marks>100)
	printf("\nEnter marks below 100");
	else if(marks<0)
	printf("\nEnter marks above 0");
	else if(marks>=85)
	printf("\nGrade A");
	else if(marks>=70)
	printf("\nGrade B");
	else if(marks>=60)
	printf("\nGrade C");
	else if(marks>=50)
	printf("\nGrade D");
	else
	printf("\nFail");
	return 0;
} 
