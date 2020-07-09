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

    double getCaloriesDay(const GymMember& person) const;
    double getMuscleDay(const GymMember& person) const;
    double getCalories(const GymMember& person) const;
    double getMuscle(const GymMember& person) const;
    void addExercise(Exercise* e);

    int getDays() const { return days;}
    string getName() const { return name;}
    string getDescription() const { return description;}

    Exercise* getExercize(string name) const;
    string toString() const;
};

#endif //TRAINING_PLAN_TRAININGPLAN_H
