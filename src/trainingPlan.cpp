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

double TrainingPlan::getClories(const GymMember &person) const {
    double res = 0;
    double calCoeff = person.getBMI();
    if(exerciseList != nullptr){
        for(int i = 0; i < indexExercizes; i++){
            res += exerciseList[i]->getCaloriesConsumed();
        }
    }
    return res;
}

double TrainingPlan::getMuscle(const GymMember &person) const {
    double res = 0;
    if(exerciseList != nullptr){
        for(int i = 0; i < indexExercizes; i++){
            res += exerciseList[i]->getMuscleGain();
        }
    }
    return res;
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
//-----------------------------------------------------------------------------------



