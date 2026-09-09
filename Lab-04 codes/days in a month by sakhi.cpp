#include<stdio.h>
int main()
{
	int month,year;
	printf("Enter the num of month: ");
	scanf("%d",&month);
	printf("Enter the year: ");
	scanf("%d",&year);
	
		switch(month)
	{
	
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\n31 days");
		    break;
		
		 case 2:
			if(year%4==0 && year%100!=0)
			printf("\n29 days");
			else if(year%400==0)
			printf("29 days");
			else printf("\n28 days");
			break;
	
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\n30 days");
			break;
			
		default:
			printf("\nThere are 12 months in a year vrooooo");
			

	}
	return 0;
}
