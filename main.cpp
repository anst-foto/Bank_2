#include <iostream>

#include "Account.h"

using namespace std;

int main() {
    Account* account = new Account(new Person("Andrey", "Starinin"));
    cout << account->GetBalance() << endl;
    if (account->Deposit(-5)) {
        cout << "SUCCESS DEPOSIT " << account->GetBalance() << endl;
    } else {
        cout << "ERROR DEPOSIT " << account->GetBalance() << endl;
    }

    if (account->Deposit(500)) {
        cout << "SUCCESS DEPOSIT " << account->GetBalance() << endl;
    } else {
        cout << "ERROR DEPOSIT " << account->GetBalance() << endl;
    }

    if (account->Close()) {
        cout << "SUCCESS CLOSE " << endl;
    } else {
        cout << "ERROR CLOSE " << account->GetBalance() << endl;
    }


    return 0;
}
