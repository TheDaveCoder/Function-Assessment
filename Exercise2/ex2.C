#include <stdio.h>

float squareIt(int);

int main() {
    float num;
    printf("Square Number Calculator\n");
    printf("========================\n");
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("The square of %.2f is: ", num);
    printf("%.2f", squareIt(num));
}

float squareIt(int num) {
    return num*num;
}