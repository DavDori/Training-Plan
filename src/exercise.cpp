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

double ExerciseTimed::getCardioIntensity() const {
    return caloriesFactor * min * sets;
}

double ExerciseTimed::getMuscleIntensity() const {
    return muscleFactor * min * sets;
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

double ExerciseRep::getCardioIntensity() const {
    return caloriesFactor * reps * sets;
}

double ExerciseRep::getMuscleIntensity() const {
    return muscleFactor * weight  * reps * sets;
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



