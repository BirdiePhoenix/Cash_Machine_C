#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stddef.h>

typedef struct {
    int number; // account number
    char *owner;
    char pin[5];
    double balance;
} Account;

typedef struct {
    Account *items; // dynamic array of accounts
    size_t size; // amount of accounts
    size_t capacity; // allocated capacity
} AccountList;

void initAccountList(AccountList *list);
void freeAccountList(AccountList *list);
int addAccount(AccountList *list, int number, const char *owner, 
                const char *pin, double initial_balance);
Account* findByNumber(AccountList *list, int number);
int deposit(Account *acc, double amount);
int withdraw(Account * acc, double amount);
int transfer(Account *from, Account *to, double amount);

#endif