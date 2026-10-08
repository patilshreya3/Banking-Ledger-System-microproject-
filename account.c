#include <stdio.h>
#include "account.h"

struct Account ledger[MAX];
int total_accounts = 0;

// Function to input details for accounts
void input_accounts() {
    printf("Enter how many accounts you want to add: ");
    scanf("%d", &total_accounts);

    for (int i = 0; i < total_accounts; i++) {
        printf("\n--- Enter Details for Account %d ---\n", i + 1);
        printf("Enter Account Number: ");
        scanf("%d", &ledger[i].account_number);
        
        printf("Enter Holder Name: ");
        scanf("%s", ledger[i].holder_name);
        
        printf("Enter Account Type (savings/current): ");
        scanf("%s", ledger[i].account_type);
        
        printf("Enter Initial Balance: ₹");
        scanf("%lf", &ledger[i].balance);
    }
    printf("\nSuccess: %d accounts saved!\n", total_accounts);
}

// Function to display all accounts in a list
void print_all_accounts() {
    if (total_accounts == 0) {
        printf("\nNo accounts found!\n");
        return;
    }
    printf("\n=== ALL BANK ACCOUNTS ===\n");
    for (int i = 0; i < total_accounts; i++) {
        printf("Acc No: %d | Name: %s | Type: %s | Balance: ₹%.2f\n",
               ledger[i].account_number, ledger[i].holder_name, ledger[i].account_type, ledger[i].balance);
    }
}
