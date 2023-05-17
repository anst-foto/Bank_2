#ifndef BANK_2_FILEHELPER_H
#define BANK_2_FILEHELPER_H

#include <fstream>

#include "Bank.h"

using namespace std;

void ExportToFile(string path, Bank* bank) {
    auto accounts = bank->GetAllAccounts();
    ofstream file;
    file.open(path, ios::trunc);
    for (auto account : accounts) {
        file << account->GetId() << "|" << account->GetOwner()->GetFullName() << "|" << account->GetBalance() << "|" << account->GetStatus() << endl;
    }
    file.close();
}

#endif //BANK_2_FILEHELPER_H
