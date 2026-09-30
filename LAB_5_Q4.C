/*
Question:4
An ATM checks a withdrawal request step by step. Each step only runs if the previous step has passed. After all checks pass, the ATM calculates the new balance and breaks the cash into notes.

Tasks
Accept these inputs:
Card status (1 = valid, 0 = blocked)
PIN correctness (1 = correct, 0 = wrong)
Account balance
Withdrawal amount
Check in this order, and stop at the first failure:
If card is blocked → print Card blocked. Contact bank.
Else if PIN is wrong → print Incorrect PIN.
Else if withdrawal amount ≤ 0 → print Invalid amount.
Else if withdrawal amount > balance → print Insufficient balance.
Else if withdrawal amount > 25000 → print Daily limit exceeded.
Else if (balance − withdrawal) < 1000 → print Minimum balance must be maintained.
Else → dispense cash.
When dispensing, calculate and print:
New balance = balance − withdrawal
Number of 2000 notes, 500 notes, and 100 notes needed (largest first)
Final message: Please collect your cash.
*/
#include <stdio.h>

int main()
{
    int cardStatus, pin;
    int balance, withdrawal;
    int notes2000, notes500, notes100;

    printf("Enter card status (1 = Valid, 0 = Blocked): ");
    scanf("%d", &cardStatus);

    printf("Enter PIN correctness (1 = Correct, 0 = Wrong): ");
    scanf("%d", &pin);

    printf("Enter account balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (cardStatus == 0)
    {
        printf("Card blocked. Contact bank.\n");
    }
    else
    {
        if (pin == 0)
        {
            printf("Incorrect PIN.\n");
        }
        else
        {
            if (withdrawal <= 0)
            {
                printf("Invalid amount.\n");
            }
            else
            {
                if (withdrawal > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    if (withdrawal > 25000)
                    {
                        printf("Daily limit exceeded.\n");
                    }
                    else
                    {
                        if ((balance - withdrawal) < 1000)
                        {
                            printf("Minimum balance must be maintained.\n");
                        }
                        else
                        {
                            balance = balance - withdrawal;

                            notes2000 = withdrawal / 2000;
                            withdrawal = withdrawal % 2000;

                            notes500 = withdrawal / 500;
                            withdrawal = withdrawal % 500;

                            notes100 = withdrawal / 100;

                            printf("New Balance: %d\n", balance);

                            printf("Number of 2000 notes: %d\n", notes2000);
                            printf("Number of 500 notes: %d\n", notes500);
                            printf("Number of 100 notes: %d\n", notes100);

                            printf("Please collect your cash.\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}