#include <stdio.h>

int main() {
    int pin = 1233;
    int enterpin;
    int attempts = 0;
    int authenticated = 0;

    float bal = 1000;
    float deposit;
    float withdraw;
    int choice;
    char user;
    int newpin;

    // PIN Authentication
    while (attempts < 4) {

        printf("\nEnter PIN: ");
        scanf("%4d", &enterpin);

        if (enterpin == pin) {
            printf("\nPIN verified successfully!\n");
            authenticated = 1;
            break;
        } 
        else {
            attempts++;
            printf("Wrong PIN!\n");

            if (attempts < 4) {
                printf("Attempts remaining: %d\n", 4 - attempts);
            }
        }
    }

    // Lock effect
    if (authenticated == 0) {
        printf("\n-------------------------\n");
        printf("       ATM LOCKED\n");
        printf("-------------------------\n");
        printf("Too many wrong attempts.\n");
        printf("Please try again after 5 minutes.\n");
        scanf(" %c",&user);
        if(user=='y'||user=='Y')  {
        	printf("--------enter new pin---------");
            scanf("%d",&newpin);
        	pin=newpin;
        	attempts=0;
        }

        return 0;   // ATM program yahin stop
    }

    // ATM Menu
    while (1) {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: %.2f\n", bal);
        }

        else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%f", &deposit);

            if (deposit > 0) {
                bal = bal + deposit;
                printf("Deposit successful!\n");
                printf("New balance: %.2f\n", bal);
            }
            else {
                printf("Invalid amount!\n");
            }
        }

        else if (choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &withdraw);

            if (withdraw > 0 && withdraw <= bal) {
                bal = bal - withdraw;
                printf("Withdrawal successful!\n");
                printf("Remaining balance: %.2f\n", bal);
            }
            else {
                printf("Invalid amount or insufficient balance!\n");
            }
        }

        else if (choice == 4) {
            printf("Thank you for using ATM.\n");
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
