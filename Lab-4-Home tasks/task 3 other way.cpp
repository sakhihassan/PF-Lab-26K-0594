#include<stdio.h>
int main()
{
	int balance,withdrawal_amount,limit,remaining_balance;
	printf("Enter balance: ");
	scanf("%d",&balance);
	printf("Enter withdrawal amount: ");
	scanf("%d",&withdrawal_amount);
	remaining_balance=balance-withdrawal_amount;
	limit=25000;
	if(withdrawal_amount<=balance&&withdrawal_amount<=limit&&withdrawal_amount%500==0)
	{
	printf("\nWithdrawal successful\nRemaining balance: %d",remaining_balance);
	}
	else if(withdrawal_amount>balance)
	{
		printf("\nWithdrawal failed\nReason: Not enough funds");
	}
	else if(withdrawal_amount>limit)
	{
		printf("\nWithdrawal failed\nReason: Daily limit reached");
	}
	else printf("\nWithdrawal failed\nReason: You can only withdraw in 500 notes");
	return 0;
}
