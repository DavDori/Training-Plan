//
// Created by davide on 08/07/20.
//

#include <sstream>

#include "../include/exercise.h"

ExerciseTimed::ExerciseTimed(string name, string description, double mf, double cf, double min, int sets)
    : Exercise(name, description, mf, cf){
    this->min = min;
    this->sets = sets;
}

ExerciseTimed::ExerciseTimed(const ExerciseTimed &other) {
    name = other.name;
    description = other.description;
    muscleFactor = other.muscleFactor;
    caloriesFactor = other.caloriesFactor;
    min = other.min;
    sets = other.sets;
}

double ExerciseTimed::getCaloriesConsumed() const {
    return caloriesFactor * pow(min,1.5) *sets;
}

double ExerciseTimed::getMuscleGain() const {
    return muscleFactor * min *sets;;
}

string ExerciseTimed::toString() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2);   //imposta una precisione costante di due cifre
    stream << name << std::endl << std::endl;
    stream << description << std::endl << std::endl;
    stream << "time: "<< min << " min" << std::endl;
    stream << "sets: "<< sets << std::endl;

    return stream.str();
}


ExerciseRep::ExerciseRep(string name, string description, double mf, double cf, int reps, double weight, int sets)
    : Exercise(name, description, mf, cf), reps(reps), sets(sets), weight(weight) {}

ExerciseRep::ExerciseRep(const ExerciseRep &other) {
    name = other.name;
    description = other.description;
    muscleFactor = other.muscleFactor;
    caloriesFactor = other.caloriesFactor;
    sets = other.sets;
    reps = other.reps;
    weight = other.weight;
}

double ExerciseRep::getCaloriesConsumed() const {
    return caloriesFactor * weight * pow(reps,2) * sets;
}

double ExerciseRep::getMuscleGain() const {
    return muscleFactor * pow(weight,2)  * reps * sets;
}

string ExerciseRep::toString() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2);   //imposta una precisione costante di due cifre
    stream << name << std::endl << std::endl;
    stream << description << std::endl << std::endl;
    stream << "reps: "<< reps << std::endl;
    stream << "sets: "<< sets << std::endl;

    return stream.str();
}



