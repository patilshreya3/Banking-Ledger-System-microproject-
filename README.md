# Banking-Ledger-System-microproject-
A beginner-friendly, modular C language microproject implementing a Banking Account Ledger System using structural array records, linear search logic, and simple conditional transaction processing.
# Banking Account Ledger System

A modular Microproject built in C Language to manage bank account records and perform transactional accounting operations. This project is structured into multiple files using clear, beginner-friendly logic.

---

## Project Requirements Implemented

This project fulfills all core accounting logic requirements:
* **Account Storage:** Dynamic memory tracking using a structured data system (struct Account ledger[MAX]).
* **Search Transactions:** Quick lookup execution using basic matching logic to process deposits and withdrawals.
* **Transaction Safeguards:** Automated conditional check loops to instantly reject withdrawals if user funds are insufficient.
* **Loop Interest Calculations:** Iterates through structural layers to apply standard annual growth updates (4% for savings accounts and 2% for current accounts).
* **High/Low Tracker:** Evaluates structural indices to isolate the specific accounts carrying extreme financial limits.
* **Minimum Balance Alert:** Identifies and aggregates real-time warning tracking for accounts dipping under the critical ₹1000 baseline.

---

## File Layout

The codebase utilizes separate source modules to handle distinct functional operations cleanly:
* main.c - Core interactive terminal console hub routing user selections.
* account.h & account.c - Defines structural constraints and initializes array record spaces.
* transaction.h & transaction.c - Handles monetary movement, checking conditions, and executing interest calculations.
* report.h & report.c - Conducts analytics calculations to extract balance extremes and alerts.

---

## How to Run Locally

If you clone or download this repository on your computer, navigate into the folder directory using a command window terminal and run the standard compiler commands:

```bash
gcc main.c account.c transaction.c report.c -o bank_ledger.exe
./bank_ledger.exe
```
