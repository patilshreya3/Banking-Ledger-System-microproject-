#ifndef ACCOUNT_H
#define ACCOUNT_H

#define MAX 500

// Blueprint for a single bank account record
struct Account {
    int account_number;
    char holder_name[50];  
    char account_type[30]; 
    double balance;        
};

// Global array and counter variable shared across files
extern struct Account ledger[MAX];
extern int total_accounts;

void input_accounts();
void print_all_accounts();

#endif
