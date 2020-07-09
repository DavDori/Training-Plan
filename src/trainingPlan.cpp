//
// Created by davide on 08/07/20.
//

#include "../include/trainingPlan.h"

const double normalBMI = 20.0;

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
    double res = 0.0;
    /*
     * BMI is used to make an assumption on who easy is for a person to burn
     * calories, in this case, the higher, the more difficult it gets
     */
    double factor = person.getBMI() / normalBMI;

    if(exerciseList != nullptr){
        for(int i = 0; i < indexExercizes; i++){
            res += exerciseList[i]->getCaloriesConsumed() * factor;
        }
    }
    return res;
}

double TrainingPlan::getMuscle(const GymMember &person) const {
    double res = 0.0;
    /*
     * BMI is used to make an assumption on who easy is for a person to gain
     * muscle, in this case, the lower, the more difficult it gets
     */
    double factor = person.getBMI() / normalBMI;

    if(exerciseList != nullptr){
        for(int i = 0; i < indexExercizes; i++){
            res += exerciseList[i]->getMuscleGain() / factor;
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



