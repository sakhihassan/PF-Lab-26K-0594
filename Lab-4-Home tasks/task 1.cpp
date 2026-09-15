#include<stdio.h>
int main()
{
	float weight,height,BMI;
	printf("Enter weight(kg): ");
	scanf("%f",&weight);
	printf("Enter height(m): ");
	scanf("%f",&height);
	BMI=weight/(height*height);
	printf("\nYour BMI is: %.2f",BMI);
	if(BMI<18.5)
	printf("\ncategory:underweight");
	else if(BMI<=24.9)
	printf("\ncategory:normal");
	else if(BMI<=29.9)
	printf("\ncategory:overweight");
	else printf("\ncategory:obese");
	return 0;
}
