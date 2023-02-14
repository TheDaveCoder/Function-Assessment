#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <cstring>

void deposit(double *bal);
void withdraw(double *bal);

int main()
{
    double accountBalance = 0.0;
    char arr[10][21] = {"Adelric Beck",
                        "Merlin Jimenez",
                        "Benigno Siciliano",
                        "Nikko Bosatsu",
                        "Haywood Presleye",
                        "Miya Kazuhiro",
                        "Diana Green",
                        "Corinne Lane",
                        "Viktoriya Mikhailova",
                        "Gwenith Rhoderick"};
    char randName[21];
    srand(time(NULL));
    strcpy(randName, arr[rand() % 10]);
    int choice;
    while (true)
    {
        printf("\n===============================");
        printf("\nWelcome to the UwU Bank, %s!\n", randName);
        printf("Please select an option..\n");
        printf("1 - Deposit\n");
        printf("2 - Withdraw\n");
        printf("3 - Balance inquiry\n");
        printf("4 - Exit\n\n");
        printf("Option: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            deposit(&accountBalance);
            break;
        case 2:
            withdraw(&accountBalance);
            break;
        case 3:
            printf("\n\nUwU! Your current balance is: %.2lf\n", accountBalance);
            break;
        case 4:
            printf("\nThank you for using UwU bank!\n");
            return 0;
            break;
        default:
            printf("\nU^U That is not a valid option dummy!\n");
            break;
        }
    }
}

void deposit(double *bal)
{
    double amount;
    printf("\nEnter the amount to deposit: ");
    scanf("%lf", &amount);
    *bal += amount;
    printf("Your new balance is %.2lf\n", *bal);
}

void withdraw(double *bal)
{
    double amount;
    printf("\nEnter the amount to withdraw: ");
    scanf("%lf", &amount);
    if (amount < *bal)
    {
        *bal -= amount;
        printf("Your new balance is %.2lf\n", *bal);
    }
    else
    {
        printf("You don't have enough money to withdraw!\n");
    }
}
