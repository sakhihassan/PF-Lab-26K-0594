#include<stdio.h>
#include<ctype.h>
int main()
{
	char alphabet;
	printf("Enter an alphabet: ");
	scanf("%c",&alphabet);
	if(isalpha(alphabet))
	{
		switch(alphabet)
		{		
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			{
				printf("\nYou entered a vowel");
			}
		    break;
		default:
			{
				printf("\nYou entered a consonant");
			}
			break;
		}
	}
	else printf("\nPlease enter an alphabet");
	return 0;
}
