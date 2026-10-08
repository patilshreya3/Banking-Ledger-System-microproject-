#include <stdio.h>
#include <string.h>
#include "account.h"
#include "transaction.h"

// Function to deposit money by searching account number
void deposit_money() {
    int search_id, found = 0;
    double amount;
    
    printf("\nEnter Account Number to Deposit: ");
    scanf("%d", &search_id);

    // Loop through array to find the matching account
    for (int i = 0; i < total_accounts; i++) {
        if (ledger[i].account_number == search_id) {
            found = 1;
            printf("Enter amount to deposit: ₹");
            scanf("%lf", &amount);
            ledger[i].balance += amount; // Add money to balance
            printf("Done! New balance: ₹%.2f\n", ledger[i].balance);
            break;
        }
    }
    if (found == 0) {
        printf("Error: Account number not found!\n");
    }
}

// Function to withdraw money with a balance check
void withdraw_money() {
    int search_id, found = 0;
    double amount;
    
    printf("\nEnter Account Number to Withdraw: ");
    scanf("%d", &search_id);

    // Loop through array to find the matching account
    for (int i = 0; i < total_accounts; i++) {
        if (ledger[i].account_number == search_id) {
            found = 1;
            printf("Enter amount to withdraw: ₹");
            scanf("%lf", &amount);
            
            // Reject if balance is not enough
            if (amount > ledger[i].balance) {
                printf("Rejected! Insufficient balance. Available: ₹%.2f\n", ledger[i].balance);
            } else {
                ledger[i].balance -= amount; // Deduct money from balance
                printf("Done! Remaining balance: ₹%.2f\n", ledger[i].balance);
            }
            break;
        }
    }
    if (found == 0) {
        printf("Error: Account number not found!\n");
    }
}

// Function to apply interest rates using a loop
void add_interest() {
    for (int i = 0; i < total_accounts; i++) {
        if (strcmp(ledger[i].account_type, "savings") == 0) {
            ledger[i].balance += ledger[i].balance * 0.04; // Add 4% interest
        } else if (strcmp(ledger[i].account_type, "current") == 0) {
            ledger[i].balance += ledger[i].balance * 0.02; // Add 2% interest
        }
    }
    printf("\nAnnual interest added to all accounts successfully!\n");
}
