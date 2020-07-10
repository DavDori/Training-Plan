//
// Created by davide on 08/07/20.
//

#include "../include/gym.h"

Persona::Persona(string nm, string srnm, int age) : name(nm), surname(srnm), age(age){}

Persona::Persona(const Persona &other) {
    name = other.name;
    surname = other.surname;
    age = other.age;
}

string Persona::toString() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2);   //imposta una precisione costante di due cifre
    stream << name << " " << surname << std::endl;
    stream << "Age: "<< age << std::endl;

    return stream.str();
}

GymMember::GymMember(string nm, string srnm, int age, double w, double h, double mG, double cG) : Persona(nm,srnm,age){
    weight = w;
    height = h;
    BMI = w / (h * h);

    double intensity = mG + cG;
    //Normalize the intensity values
    muscleIntensityGoal = mG / intensity;
    caloriesIntensityGoal = cG / intensity;
}
