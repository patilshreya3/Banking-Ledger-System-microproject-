#include <stdio.h>
#include "account.h"
#include "transaction.h"
#include "report.h"

int main() {
    int choice;
    
    printf("============================================\n");
    printf("      BANKING ACCOUNT LEDGER SYSTEM         \n");
    printf("============================================\n");
    
    // First, add the accounts to initialize data
    input_accounts();

    // Loop menu using a basic switch-case statement
    do {
        printf("\n--- MAIN MENU ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Apply Annual Interest Rates\n");
        printf("4. Find Highest & Lowest Balances\n");
        printf("5. Show Low Balance Alerts\n");
        printf("6. Display All Records\n");
        printf("7. Exit System\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: deposit_money(); break;
            case 2: withdraw_money(); break;
            case 3: add_interest(); break;
            case 4: show_highest_lowest(); break;
            case 5: check_low_balance(); break;
            case 6: print_all_accounts(); break;
            case 7: printf("\nThank you for using the ledger system!\n"); break;
            default: printf("\nInvalid option! Please enter a number from 1 to 7.\n");
        }
    } while (choice != 7);

    return 0;
}
