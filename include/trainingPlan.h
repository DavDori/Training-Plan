//
// Created by davide on 08/07/20.
//

#ifndef TRAINING_PLAN_TRAININGPLAN_H
#define TRAINING_PLAN_TRAININGPLAN_H

#include "exercise.h"
#include "gym.h"

class TrainingPlan {
protected:
    int days;
    string name;
    string description;
    Exercise** exerciseList;
    int indexExercizes;

public:
    TrainingPlan(string name, string desc, int days);
    TrainingPlan(const TrainingPlan& other);
    ~TrainingPlan() { delete[] exerciseList;}

    double getCardio(const GymMember& person) const;
    double getMuscle(const GymMember& person) const;
    void addExercise(Exercise* e);
    double getCompatibility(const GymMember& person) const; //distance between person goal and training focus

    int getDays() const { return days;}
    string getName() const { return name;}
    string getDescription() const { return description;}

    Exercise* getExercize(string name) const;
    string toString() const;
};

#endif //TRAINING_PLAN_TRAININGPLAN_H
