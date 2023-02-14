#include <stdio.h>

bool checkEven(int);

int main() {
    int num;
    printf("Odd or Even Evaluator\n");
    printf("========================\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number %d is: ", num);
    printf("%s", checkEven(num)==1 ? "EVEN" : "ODD"); 
}

bool checkEven(int num) {
    return num%2==0 ? true : false;
}