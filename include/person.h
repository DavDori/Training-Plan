//
// Created by davide on 12/07/20.
//

#ifndef TRAINING_PLAN_PERSON_H
#define TRAINING_PLAN_PERSON_H

#include <string>
#include <string>
#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    string surname;
    int age;

public:
    Person() {}
    Person(string nm, string srnm, int age);
    Person(const Person& other);

    string getName() const { return name;}
    string getSurname() const { return surname;}
    int getAge() const {return age;}
    string toString() const;

};



#endif //TRAINING_PLAN_PERSON_H
