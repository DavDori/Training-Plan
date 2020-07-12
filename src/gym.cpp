//
// Created by davide on 08/07/20.
//

#include "../include/gym.h"

GymMember::GymMember(string nm, string srnm, int age, double w, double h, double mG, double cG) : Person(nm,srnm,age){
    weight = w;
    height = h;
    BMI = w / (h * h);

    double intensity = mG + cG;
    //Normalize the intensity values
    muscleIntensityGoal = mG / intensity;
    caloriesIntensityGoal = cG / intensity;
}
