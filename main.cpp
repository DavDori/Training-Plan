#include <iostream>
#include "include/exercise.h"
#include "include/trainingPlan.h"

using namespace std;

int main() {

    GymMember P1("John","J",22,50,1.70);
    GymMember P2("Jack","J",30,100,1.50);

    string name1 = "ROCKSMASHER";
    string desc1 = "Start in the sumo pose next to a big boulder,\n rotate the torso and start hitting with the hand palm";
    Exercise* E1 = new ExerciseTimed(name1, desc1, 0.9, 0.1, 2, 3);

    string name2 = "JACK";
    string desc2 = "Start next to a car, in the squat position,\n grab a car side and lift the car, hold on until the spotter replaces the wheel.\n Then put the car down and jump";
    Exercise* E2 = new ExerciseRep(name2, desc2, 0.95, 0.1, 5, 5000);

    TrainingPlan myPlan("BIG","Go big or go home", 30);
    myPlan.addExercise(E1);

    cout << myPlan.toString() << endl;
    cout << P1.getName() << endl;
    cout << "Burned calories per day: " << myPlan.getClories(P1)/myPlan.getDays() << endl;
    cout << "Gained muscle per day: " << myPlan.getMuscle(P1)/myPlan.getDays() << endl;
    cout << P2.getName() << endl;
    cout << "Burned calories per day: " << myPlan.getClories(P2)/myPlan.getDays() << endl;
    cout << "Gained muscle per day: " << myPlan.getMuscle(P2)/myPlan.getDays() << endl;

    return 0;
}

