#ifndef BANK_2_ACCOUNT_H
#define BANK_2_ACCOUNT_H

#include <string>

#include "Person.h"

enum StatusType {
    Actived, Closed, Arrested
};

class Account {
private:
    int id;
    Person* owner;
    double balance;
    StatusType status;

public:
    Account(Person *owner, double balance = 0) : owner(owner), balance(balance) {
        id = 0 + rand() % 10000;
        status = StatusType::Actived;
    }

    bool Deposit(double money) {
        if (status == StatusType::Arrested || status == StatusType::Closed) return false;
        if (money < 0) return false;
        balance += money;
        return true;
    }

    bool Withdraw(double money) {
        if (status == StatusType::Arrested || status == StatusType::Closed) return false;
        if (money < 0) return false;
        if (money > balance) return false;
        balance -= money;
        return true;
    }

    bool Close() {
        if (status == StatusType::Arrested || status == StatusType::Closed) return false;
        if (balance > 0) return false;
        status = StatusType::Closed;
        return true;
    }

    int GetId() {
        return id;
    }

    Person *GetOwner() {
        return owner;
    }

    double GetBalance() {
        return balance;
    }

    StatusType GetStatus() {
        return status;
    }
};


#endif //BANK_2_ACCOUNT_H
