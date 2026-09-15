#include<stdio.h>

int main()
{
    int dep,age,hr,con,severity,critical,senior,tempalert,priority,category;
    float temp;
    printf("1: General Emergency\n");
    printf("2: Cardiology\n");
    printf("3: Neurology\n");
    printf("4: Trauma\n");
    printf("Enter department: ");
    scanf("%d",&dep);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter heart rate: ");
    scanf("%d",&hr);
    printf("Enter temperature: ");
    scanf("%f",&temp);
    printf("Enter consciousness (1 = Conscious, 0 = Unconscious): ");
    scanf("%d",&con);
    printf("Enter severity level (1 = Low, 2 = Medium, 3 = High): ");
    scanf("%d",&severity);
    critical=(hr<50||hr>120)&&con==0;
    senior=age>=65;
    tempalert=temp<36||temp>38;
    priority=0;
    switch(dep)
    {
        case 1:
            printf("\nDepartment: General Emergency\n");
            switch(severity)
            {
                case 1:
                    priority=0;
                    break;
                case 2:
                    priority=1;
                    break;
                case 3:
                    priority=1;
                    break;
            }
            break;
        case 2:
            printf("\nDepartment: Cardiology\n");
            switch((hr<50||hr>120)?1:0)
            {
                case 1:
                    priority=1;
                    printf("Abnormal heart rate detected.\n");
                    break;

                case 0:
                    priority=0;
                    break;
            }
            break;
        case 3:
            printf("\nDepartment: Neurology\n");
            switch(con)
            {
                case 0:
                    priority=1;
                    printf("Patient is unconscious.\n");
                    break;
                case 1:
                    priority=0;
                    break;
            }
            break;
        case 4:
            printf("\nDepartment: Trauma\n");
            switch(severity)
            {
                case 3:
                    priority=1;
                    printf("High severity trauma case.\n");
                    break;
                case 1:
                case 2:
                    priority=0;
                    break;
            }
            break;
        default:
            printf("Invalid department.\n");
            return 0;
    }
    category=(age+hr)%4;
    printf("\nTriage Result\n");
    printf("Department Priority: ");
    printf("%s\n",priority?"High":"Normal");
    printf("Critical Condition: ");
    printf("%s\n",critical?"Yes":"No");
    printf("Senior Priority: ");
    printf("%s\n",senior?"Yes":"No");
    printf("Temperature Alert: ");
    printf("%s\n",tempalert?"Yes":"No");
    switch(category)
    {
        case 0:
            printf("Case Category: A\n");
            break;

        case 1:
            printf("Case Category: B\n");
            break;

        case 2:
            printf("Case Category: C\n");
            break;

        case 3:
            printf("Case Category: D\n");
            break;
    }

    if(critical)
    {
        printf("Final Decision: Immediate Medical Attention\n");
    }
    else if(priority||senior||tempalert)
    {
        printf("Final Decision: Priority - Further Assessment\n");
    }
    else
    {
        printf("Final Decision: Routine Medical Assessment\n");
    }

    return 0;
}
