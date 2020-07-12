//
// Created by davide on 12/07/20.
//

#include "../include/person.h"

Person::Person(string nm, string srnm, int age) :
name(nm), surname(srnm), age(age){}

Person::Person(const Person &other) {
    name = other.name;
    surname = other.surname;
    age = other.age;
}

string Person::toString() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2);   //imposta una precisione costante di due cifre
    stream << name << " " << surname << std::endl;
    stream << "Age: "<< age << std::endl;

    return stream.str();
}