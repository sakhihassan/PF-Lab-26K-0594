#include<stdio.h>
int main()

{
	int num1,num2,result;
	char op;
	printf("Enter the 1st num: ");
	scanf("%d",&num1);
    printf("Enter the 2nd num: ");
	scanf("%d",&num2);
	printf("Enter the operator: ");
	scanf(" %c",&op);

	
		switch(op)
	{
		case '+': 
		       	result=num1+num2;
		    	printf("The sum of the numbers is: %d",result);
		    	break;
		case '-':
		    	result=num1-num2;
		    	printf("The diff of the numbers is: %d",result);
		        break;
		case '*':
		    	result=num1*num2;
		    	printf("The prod of the numbers is: %d",result);
		    	break;
		case '/':
		    	if(num2==0)
		   	    printf("\nA num can not be divided by 0");
	        	else
				{
				  result=num1/num2;
				  printf("\nThe quotient of the numbers is: %d",result);
		        }
				  break;
		default:
			printf("\nEnter a valid operator");
			break;
   	}
    
	return 0;
}
