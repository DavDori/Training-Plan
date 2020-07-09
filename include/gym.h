//
// Created by davide on 08/07/20.
//

#ifndef TRAINING_PLAN_GYM_H
#define TRAINING_PLAN_GYM_H

#include <string>
using namespace std;

class Persona {
protected:
    string name;
    string surname;
    int age;

public:
    Persona() {}
    Persona(string nm, string srnm, int age);
    Persona(const Persona& other);

    string getName() { return name;}
    string getSurname() { return surname;}
    int getAge() {return age;}

};

class GymMember : public Persona{
private:
    double weight; //kg
    double height; //m
    double BMI;

public:
    GymMember() {}
    GymMember(string nm, string srnm, int age, double w, double h);

    double getWeight() const { return weight;}
    double getHeight() const { return height;}
    double getBMI() const { return BMI;}

};

#endif //TRAINING_PLAN_GYM_H
