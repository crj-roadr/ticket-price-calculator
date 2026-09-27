#include <stdio.h>
#include <stdbool.h>

int main() {
    float price = 10.0f;
    bool isStudent = false; /* 10% discount */
    bool isSenior = false;  /* 20% discount */

    if (isStudent && isSenior) {
        printf("You get a student discount of 10%%\n");
        printf("You get a senior discount of 20%%\n");
        printf("The price of a ticket is: $%.2f\n", price * 0.7f);
    } else if (isStudent) {
        printf("You get a student discount of 10%%\n");
        printf("The price of a ticket is: $%.2f\n", price * 0.9f);
    } else if (isSenior) {
        printf("You get a senior discount of 20%%\n");
        printf("The price of a ticket is: $%.2f\n", price * 0.8f);
    } else {
        printf("You don't get a discount because you are not a student\n");
        printf("The price of a ticket is: $%.2f\n", price);
    }

    return 0;
}