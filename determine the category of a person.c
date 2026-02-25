//determine the category of a person
#include <stdio.h>

int main()
 {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12) {
        printf("Category: Child\n");
    }
    else if (age >= 13 && age <= 17) {
        printf("Category: Teenager\n");
    }
    else if (age >= 18 && age <= 60) {
        printf("Category: Adult\n");
    }
    else if (age > 60) {
        printf("Category: Senior Citizen\n");
    }
    else {
        printf("Invalid age entered.\n");
    }

    return 0;
}