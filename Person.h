#ifndef BANK_2_PERSON_H
#define BANK_2_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string first_name;
    string last_name;

public:
    Person() {}
    Person(string firstName, string lastName) : first_name(firstName), last_name(lastName) {}

    string GetFirstName() {
        return first_name;
    }

    string GetLastName() {
        return last_name;
    }

    string GetFullName() {
        return last_name + " " + first_name;
    }
};


#endif //BANK_2_PERSON_H
