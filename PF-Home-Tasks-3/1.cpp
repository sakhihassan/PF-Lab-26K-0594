#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 20;
    float height = 5.9f;
    double price = 999.99;
    char grade = 'A';
    bool passed = true;

    printf("Integer: %d, Size: %zu bytes\n", age, sizeof(age));
    printf("Float: %.2f, Size: %zu bytes\n", height, sizeof(height));
    printf("Double: %.2f, Size: %zu bytes\n", price, sizeof(price));
    printf("Character: %c, Size: %zu bytes\n", grade, sizeof(grade));
    printf("Boolean: %d, Size: %zu bytes\n", passed, sizeof(passed));

    return 0;
}

