#include <stdio.h>
#include "account.h"
#include "report.h"

// Function to find the accounts with highest and lowest balance
void show_highest_lowest() {
    if (total_accounts == 0) {
        printf("\nNo accounts to evaluate.\n");
        return;
    }
    
    int max_index = 0;
    int min_index = 0;

    // Loop to compare balances and find extremes
    for (int i = 1; i < total_accounts; i++) {
        if (ledger[i].balance > ledger[max_index].balance) {
            max_index = i; // Save index of highest balance
        }
        if (ledger[i].balance < ledger[min_index].balance) {
            min_index = i; // Save index of lowest balance
        }
    }
    
    printf("\n=== HIGHEST & LOWEST BALANCES ===\n");
    printf("Highest -> Acc No: %d | Name: %s | Balance: ₹%.2f\n", 
           ledger[max_index].account_number, ledger[max_index].holder_name, ledger[max_index].balance);
    printf("Lowest  -> Acc No: %d | Name: %s | Balance: ₹%.2f\n", 
           ledger[min_index].account_number, ledger[min_index].holder_name, ledger[min_index].balance);
}

// Function to count and show accounts below minimum balance alert
void check_low_balance() {
    int count = 0;
    
    printf("\n=== MINIMUM BALANCE ALERTS (< ₹1000) ===\n");
    for (int i = 0; i < total_accounts; i++) {
        if (ledger[i].balance < 1000.0) {
            printf("Alert! Acc No: %d (%s) has a low balance of ₹%.2f\n", 
                   ledger[i].account_number, ledger[i].holder_name, ledger[i].balance);
            count++; // Add to count if balance is under 1000
        }
    }
    printf("Total accounts below minimum balance requirement: %d\n", count);
}
