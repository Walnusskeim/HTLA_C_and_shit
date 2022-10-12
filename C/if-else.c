#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    if (firstNumber > secondNumber) {
        printf("Your first number %d is greater than your second number %d.", firstNumber, secondNumber);
    } else if (firstNumber < secondNumber) {
        printf("Your second number %d is greater than your first number %d", secondNumber, firstNumber);
    } else {
        printf("Both numbers are equal");
    }

    return 0;
}

