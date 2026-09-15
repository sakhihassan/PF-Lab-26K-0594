#include<stdio.h>
int main()
{
	int choice,num,square;
	do
	{
	printf("\n1: Even/odd\n2: Check prime\n3: Find square\n4: Exit");
	printf("\n\nEnter a choice: ");
	scanf("%d",&choice);
	if(choice!=4)
{
	printf("\nEnter the number: ");
	scanf("%d",&num);
	switch(choice)
	{case 1:
		if(num%2==0)
		printf("\nEven number\n");
		else printf("\nOdd number\n");
		break;
	 case 2:
	 {
		int prime=1;
	 	for(int a=2;a<num;a++)
	 	if(num%a==0)
	 	prime=0;
	 	else if(num<=1)
	 	prime=0;
	 	if(prime==1)
	 	printf("\nThis is a prime number\n");
	 	else printf("\nThis is not a prime number\n");
	 	break;
	 }
	 case 3:
	 	square=num*num;
	 	printf("\nSquare of the number is: %d\n",square);
	 	break;
	default:
		printf("\nEnter a valid choice\n");
		break;
	}
}   else printf("\nExited\n");

}   while(choice!=4);

	return 0;
}
