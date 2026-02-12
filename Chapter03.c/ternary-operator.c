#include <stdio.h>

int main()
{
    int age;
    int number = 7;
    int luckyNumber = 7;

    printf("Enter age: ");
    scanf("%d", &age);

    age >= 18 ? printf("adult\n") : printf("not adult\n");

    number == luckyNumber
        ? printf("you are lucky\n")
        : printf("you are not lucky\n");

    return 0;
}
