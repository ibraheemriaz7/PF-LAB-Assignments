#include <stdio.h>

void withdraw(float *balance, float amount);
void deposit(float *balance, float amount);

int main()
{
    float balance = 5000;
    float amount;
    int choice;

    printf("Current balance: %.2f\n", balance);
    printf("Select transaction type\n");
    printf("1. Debit (Withdraw)\n");
    printf("2. Credit (Deposit)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1)
    {
        withdraw(&balance, amount);
    }
    else if (choice == 2)
    {
        deposit(&balance, amount);
    }
    else
    {
        printf("Invalid transaction type\n");
    }

    printf("Final account balance: %.2f\n", balance);

    return 0;
}

void withdraw(float *balance, float amount)
{
    if (amount <= *balance)
    {
        *balance = *balance - amount;
        printf("Withdrawal successful\n");
    }
    else
    {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount)
{
    *balance = *balance + amount;
    printf("Deposit successful. Updated balance: %.2f\n", *balance);
}
