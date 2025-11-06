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


#endif