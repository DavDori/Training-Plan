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

GymMember::GymMember(string nm, string srnm, int age, double w, double h) : Persona(nm,srnm,age){
    weight = w;
    height = h;
    BMI = w / (h * h);
}
