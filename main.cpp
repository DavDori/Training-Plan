#include <iostream>
#include "include/exercise.h"
#include "include/trainingPlan.h"

using namespace std;

int main() {

    GymMember P1("John","J",22,50,1.70,10,1);
    GymMember P2("Jack","J",30,100,1.70,1,10);

    string name1 = "Running";
    string desc1 = "Good for your endurance and great cardio exercise";
    Exercise* E1 = new ExerciseTimed(name1, desc1, 0.01, 0.5, 15, 1);
    string name2 = "Jumps";
    string desc2 = "jump! ";
    Exercise* E2 = new ExerciseTimed(name2, desc2, 0.2, 0.6, 1, 3);

    string name3 = "CURL";
    string desc3 = "Focus on the biceps";
    Exercise* E3 = new ExerciseRep(name3, desc3, 0.5, 0.01, 10, 10, 4);

    string name4 = "PRESS";
    string desc4 = "Focus on the legs muscles";
    Exercise* E4 = new ExerciseRep(name4, desc4, 0.6, 0.01, 12, 100, 3);

    TrainingPlan musclePlan("BIG","Get bigger", 30);
    musclePlan.addExercise(E3);
    musclePlan.addExercise(E4);

    TrainingPlan noFatPlan("FIT","Get fit", 30);
    noFatPlan.addExercise(E1);
    noFatPlan.addExercise(E2);

    cout << P1.toString() << endl;
    cout << musclePlan.toString() << endl;
    cout << "Plan compatibility: " << musclePlan.getCompatibility(P1) << endl;
    cout << noFatPlan.toString() << endl;
    cout << "Plan compatibility: " << noFatPlan.getCompatibility(P1) << endl;

    return 0;
}

