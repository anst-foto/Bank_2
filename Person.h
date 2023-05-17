#ifndef BANK_2_PERSON_H
#define BANK_2_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string _first_name;
    string _last_name;

public:
    Person() {}
    Person(string firstName, string lastName) : _first_name(firstName), _last_name(lastName) {}

    string GetFirstName() {
        return _first_name;
    }

    string GetLastName() {
        return _last_name;
    }

    string GetFullName() {
        return _last_name + " " + _first_name;
    }
};


#endif //BANK_2_PERSON_H
