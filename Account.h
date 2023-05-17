#ifndef BANK_2_ACCOUNT_H
#define BANK_2_ACCOUNT_H

#include <string>

#include "Person.h"

enum StatusType {
    Actived, Closed, Arrested
};

class Account {
private:
    int _id;
    Person* _owner;
    double _balance;
    StatusType _status;

public:
    Account(Person *owner, double balance = 0) : _owner(owner), _balance(balance) {
        _id = 0 + rand() % 10000;
        _status = StatusType::Actived;
    }

    bool Deposit(double money) {
        if (_status == StatusType::Arrested || _status == StatusType::Closed) return false;
        if (money < 0) return false;
        _balance += money;
        return true;
    }

    bool Withdraw(double money) {
        if (_status == StatusType::Arrested || _status == StatusType::Closed) return false;
        if (money < 0) return false;
        if (money > _balance) return false;
        _balance -= money;
        return true;
    }

    bool Close() {
        if (_status == StatusType::Arrested || _status == StatusType::Closed) return false;
        if (_balance > 0) return false;
        _status = StatusType::Closed;
        return true;
    }

    int GetId() {
        return _id;
    }

    Person *GetOwner() {
        return _owner;
    }

    double GetBalance() {
        return _balance;
    }

    StatusType GetStatus() {
        return _status;
    }
};


#endif //BANK_2_ACCOUNT_H
