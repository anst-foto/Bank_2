#ifndef BANK_2_BANK_H
#define BANK_2_BANK_H

#include <map>
#include <vector>

#include "Account.h"

using namespace std;

class Bank {
private:
    map<int, Account*>* _accounts;

public:
    Bank() {
        _accounts = new map<int, Account*>;
    }

    int CreateAccount(Person* person, double balance = 0) {
        auto* account = new Account(person, balance);
        _accounts->insert(pair<int, Account*>(account->GetId(), account));
        return account->GetId();
    }

    Account* FindAccountById(int id) {
        return _accounts->at(id);
    }

    vector<Account*> FindAccountsByOwner(Person* owner) {
        vector<Account*> accounts;
        for (auto item : *_accounts) {
            auto account = item.second;
            if (account->GetOwner() == owner) {
                accounts.push_back(account);
            }
        }
        return accounts;
    }

    vector<Account*> GetAllAccounts() {
        vector<Account*> accounts;
        for (auto item : *_accounts) {
            auto account = item.second;
            accounts.push_back(account);
        }
        return accounts;
    }
};


#endif //BANK_2_BANK_H
