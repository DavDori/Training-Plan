//
// Created by davide on 08/07/20.
//

#ifndef TRAINING_PLAN_EXERCISE_H
#define TRAINING_PLAN_EXERCISE_H


#include <cmath>
#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

class Exercise {
protected:
    string name;
    string description;

    double muscleFactor;
    double caloriesFactor;
public:

    Exercise() {};
    Exercise(string name, string description, double mf, double cf)
        : name(name), description(description), muscleFactor(mf), caloriesFactor(cf) {};

    virtual double getCardioIntensity() const  = 0;
    virtual double getMuscleIntensity() const = 0;
    virtual string toString() const = 0;

    string getName() const { return  name;}
    string getDescription() const { return description;}

};

class ExerciseTimed : public Exercise {
private:
    double min;
    int sets;

public:
    ExerciseTimed() {};
    ExerciseTimed(string name, string description, double mf, double cf, double min, int sets = 1);
    ExerciseTimed(const ExerciseTimed& other);

    double getCardioIntensity() const override;
    double getMuscleIntensity() const override;
    string toString() const override;
};

class ExerciseRep : public Exercise {
protected:
    int reps;
    int sets;
    double weight; //kg
public:
    ExerciseRep() {};
    ExerciseRep(string name, string description, double mf, double cf, int reps, double weight ,int sets = 1);
    ExerciseRep(const ExerciseRep& other);

    double getCardioIntensity() const override;
    double getMuscleIntensity() const override;
    virtual string toString() const override;

};
#endif //TRAINING_PLAN_EXERCISE_H

