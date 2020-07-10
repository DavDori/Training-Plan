//
// Created by davide on 08/07/20.
//

#ifndef TRAINING_PLAN_GYM_H
#define TRAINING_PLAN_GYM_H

#include <string>
#include <iomanip>
#include <string>
#include <iostream>
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

    string getName() const { return name;}
    string getSurname() const { return surname;}
    int getAge() const {return age;}
    string toString() const;

};

class GymMember : public Persona{
private:
    double weight; //kg
    double height; //m
    double BMI;
    double muscleIntensityGoal;
    double caloriesIntensityGoal;

public:
    GymMember() {}
    GymMember(string nm, string srnm, int age, double w, double h, double mG, double cG);

    double getWeight() const { return weight;}
    double getHeight() const { return height;}
    double getBMI() const { return BMI;}
    double getMuscleIntensityGoal() const { return muscleIntensityGoal;}
    double getCaloriesIntensityGoal() const { return caloriesIntensityGoal;}

};

#endif //TRAINING_PLAN_GYM_H
