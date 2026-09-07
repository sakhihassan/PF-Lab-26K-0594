#include <stdio.h>

int main()
{
    int age = 18;
    float height = 5.9;
    char grade = 'A';
    char name[] = "Sakhi";
    long population = 2500000;

    printf("Name: %s, Age: %d, Height: %.2f, Grade: %c, Population: %ld\n",
           name, age, height, grade, population);

    return 0;
}

