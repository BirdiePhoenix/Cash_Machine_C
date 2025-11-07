#include <stdlib.h>
#include <string.h>
#include "../include/account.h"

void initAccountList(AccountList *list) {
    list->items = NULL;
    list->size = 0;
    list->capacity = 0;
}

int addAccount(AccountList *list, int number, const char *owner, 
                const char *pin, double initial_balance) {
    if(!owner || !pin || strlen(pin) != 4) return -1;
    

}