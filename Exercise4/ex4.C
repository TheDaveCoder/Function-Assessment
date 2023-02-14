#include <stdio.h>

void convertToBinary(int *num)
{
    int binaryVal = 0, placeVal = 1, remainder;
    while (*num != 0)
    {
        remainder = *num % 2;
        binaryVal += remainder * placeVal;
        *num /= 2;
        placeVal *= 10;
    }
    *num = binaryVal;
}

int main()
{
    int num;
    printf("Base 10 to Base 2 Converter\n");
    printf("========================\n");
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("%d converted to a binary value is: ", num);
    convertToBinary(&num);
    printf("%d", num);
}