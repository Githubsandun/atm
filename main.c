#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("========================\n\n");
    printf("Welcome to the ABC Bank!\n\n");
    printf("========================\n\n");
    printf("Select one of the options from following list and enter the number\n\n");
    int Deposit;
    printf("1. Deposit \n");
    int Withdraw;
    printf("2. Withdraw \n");
    int Check_Balance;
    int Balance=4000;
    printf("3. Check Balance \n\n");
    int choice;
    printf("Your choice:");
    scanf("%d", &choice);

    if(choice==1){
            printf("Enter the amount to deposit:\n");
            scanf("%d", &Deposit);
            Balance=Balance+Deposit;
            printf("Balance %d",Balance);
     }

    else if(choice==2){
            printf("Enter the amount to withdraw:\n");
            scanf("%d", &Withdraw);
                if (Withdraw>Balance){
                    printf("Your balance is Insufficient to withdraw that amount of money");
                }
                else{
                    Balance=Balance-Withdraw;
                    printf("Balance %d",Balance);
                }
            }

    else if(choice==3){
            printf("Your balance is: %d", Balance);
     }
    else{
        printf("Please enter the valid number");
     }
    return 0;
}
