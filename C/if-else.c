#include <stdio.h>

int main() {
    float ffirstNumber;
    float fsecondNumber;

    printf("Enter first number: ");
    scanf("%d", &ffirstNumber);
    printf("Enter second number: ");
    scanf("%d", &fsecondNumber);

    if (ffirstNumber > fsecondNumber) {
        printf("Your first number %d is greater than your second number %d.", ffirstNumber, fsecondNumber);
    } else if (ffirstNumber < fsecondNumber) {
        printf("Your second number %d is greater than your first number %d", fsecondNumber, ffirstNumber);
    } else {
        printf("Both numbers are equal");
    }

    return 0;
}

