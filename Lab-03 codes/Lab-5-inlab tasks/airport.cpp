#include <stdio.h>

int main()
{
    int category, destination;
    int age;
    float baggage;
    int documents;
    int allowance = 0;
    int remainder;
    int priority = 0;
    char verification;
    printf("\nEnter passenger category:\n");
    printf("1: Adult\n");
    printf("2: Student\n");
    printf("3: Senior Citizen\n");
    printf("Enter choice: ");
    scanf("%d", &category);
    printf("\nEnter destination type:\n");
    printf("1: Domestic\n");
    printf("2: International\n");
    printf("Enter choice: ");
    scanf("%d", &destination);
    printf("\nEnter passenger age: ");
    scanf("%d", &age);
    printf("\nEnter actual baggage weight (kg): ");
    scanf("%f", &baggage);
    printf("\nAre the travel documents valid?\n");
    printf("1: Yes\n");
    printf("2: No\n");
    printf("Enter choice: ");
    scanf("%d", &documents);
    switch(category)
    {
        case 1:
            printf("\nPassenger Category: Adult");
            switch(destination)
            {
                case 1:
                    printf("\nDestination Type: Domestic");
                    allowance = 20;
                    break;
                case 2:
                    printf("\nDestination Type: International");
                    allowance = 30;
                    break;
                default:
                    printf("\nInvalid destination type");
                    return 0;
            }
            break;
        case 2:
            printf("\nPassenger Category: Student");
            switch(destination)
            {
                case 1:
                    printf("\nDestination Type: Domestic");
                    allowance = 25;
                    break;
                case 2:
                    printf("\nDestination Type: International");
                    allowance = 35;
                    priority = 1;
                    break;
                default:
                    printf("\nInvalid destination type");
                    return 0;
            }
            break;
        case 3:
            printf("\nPassenger Category: Senior Citizen");

            switch(destination)
            {
                case 1:
                    printf("\nDestination Type: Domestic");
                    allowance = 30;
                    break;
                case 2:
                    printf("\nDestination Type: International");
                    allowance = 40;
                    break;
                default:
                    printf("\nInvalid destination type");
                    return 0;
            }
            priority = 1;
            break;
        default:
            printf("\nInvalid passenger category");
            return 0;
    }
    remainder = age % 5;
    switch(remainder)
    {
        case 0:
            verification = 'A';
            break;
        case 1:
            verification = 'B';
            break;
        case 2:
            verification = 'C';
            break;
        case 3:
            verification = 'D';
            break;
        case 4:
            verification = 'E';
            break;
    }
    printf("PASSENGER DETAILS\n");
    printf("\nPermitted Baggage Allowance: %d kg", allowance);
    printf("\nActual Baggage Weight: %.2f kg", baggage);
    printf("\nDocument Status: %s",
           (documents==1) ? "Valid" : "Invalid");
    printf("\nVerification Category: Category %c", verification);

    printf("\nPriority Assistance: %s",
           (priority==1) ? "Available" : "Not Available");
    printf("        BOARDING DECISION\n");
    if(documents==0)
    {
        printf("\nDocuments are invalid");
        printf("\nFINAL DECISION: DENIED BOARDING");
    }
    else
    {
        if(baggage<=allowance)
        {
            printf("\nBaggage is within the permitted allowance");
            printf("\nFINAL DECISION: NORMAL BOARDING");
        }
        else
        {
            printf("\nBaggage exceeds the permitted allowance");
            printf("\nFINAL DECISION: ENHANCED BAGGAGE SCREENING");
        }
    }

    if(category==3||category==2&&destination==2)
    {
        printf("\n\nPriority assistance criteria: YES");
    }
    else
    {
        printf("\n\nPriority assistance criteria: NO");
    }
    printf("VERIFICATION COMPLETED\n");
    return 0;
}

