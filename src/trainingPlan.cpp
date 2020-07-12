//
// Created by davide on 08/07/20.
//

#include "../include/trainingPlan.h"

TrainingPlan::TrainingPlan(string name, string desc, int days) : name(name), description(desc), days(days) {
    exerciseList = nullptr;
    indexExercizes = 0;
}

TrainingPlan::TrainingPlan(const TrainingPlan& other){
    name = other.name;
    description = other.description;
    days = other.days;
    indexExercizes = other.indexExercizes;

    exerciseList = new Exercise*[indexExercizes];
    for(int i = 0; i < indexExercizes; i++){
        exerciseList[i] = other.exerciseList[i];
    }
}

double TrainingPlan::getCardio(const GymMember &person) const {
    double res = 0.0;
    double totalIntensity = 0.0;  //normalizes the result

    if(exerciseList != nullptr){
        for(int i = 0; i < indexExercizes; i++){
            res += exerciseList[i]->getCardioIntensity();
            totalIntensity += exerciseList[i]->getMuscleIntensity() + exerciseList[i]->getCardioIntensity();
        }
    }
    return res / totalIntensity;
}

double TrainingPlan::getMuscle(const GymMember &person) const {
    double res = 0.0;
    double totalIntensity = 0.0;  //normalizes the result

    if(exerciseList != nullptr){
        for(int i = 0; i < indexExercizes; i++){
            res += exerciseList[i]->getMuscleIntensity();
            totalIntensity += exerciseList[i]->getMuscleIntensity() + exerciseList[i]->getCardioIntensity();
        }
    }
    return res / totalIntensity;
}

void TrainingPlan::addExercise(Exercise *e) {
    if(exerciseList == nullptr){
        exerciseList = new Exercise*[1];
        exerciseList[0] = e;
    } else{
        Exercise** tmp = new Exercise*[indexExercizes +1];
        for(int i = 0; i < indexExercizes; i++){
            tmp[i] = exerciseList[i];
        }
        tmp[indexExercizes] = e;

        delete[] exerciseList;
        exerciseList = tmp;
    }
    indexExercizes++;
}


string TrainingPlan::toString() const {
    std::stringstream stream;

    stream << name << std::endl;
    stream << description << std::endl;
    stream << "duration(days) : "<< days << std::endl;

    for(int i = 0; i < indexExercizes; i++){
        stream << exerciseList[i]->getName() << std::endl;
    }

    return stream.str();
}

Exercise *TrainingPlan::getExercize(string name) const{
    Exercise *res = nullptr;
    for(int i = 0; i < indexExercizes; i++)
    {
        if(name == exerciseList[i]->getName()){
            res = exerciseList[i];
        }
    }
    return res;
}


double TrainingPlan::getCompatibility(const GymMember &person) const {
    double penalty = 0;
    penalty += pow( getCardio(person) - person.getCaloriesIntensityGoal(), 2);
    penalty += pow( getMuscle(person) - person.getMuscleIntensityGoal(),2);
    return penalty;
}


