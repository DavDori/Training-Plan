#include <iostream>
#include "include/exercise.h"

int main() {
    string name1 = "ROCKSMASHER";
    string desc1 = "Start in the sumo pose next to a big boulder,\n rotate the torso and start hitting with the hand palm";
    Exercise* E1 = new ExerciseTimed(name1, desc1, 0.9, 0.1, 2, 3);

    string name2 = "JACK";
    string desc2 = "Start next to a car, in the squat position,\n grab a car side and lift the car, hold on until the spotter replaces the wheel.\n Then put the car down and jump";
    Exercise* E2 = new ExerciseRep(name2, desc2, 0.95, 0.1, 5, 5000);

    cout << E1->toString() << endl;
    cout << E2->toString() << endl;

    return 0;
}

