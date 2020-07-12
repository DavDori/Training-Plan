# Training-Plan

Set your goals and organize your training plan and check if the plan has your same target.
*Reminder*: this program has no real application, formulas are not to be taken seriusly. It has
been created to exercise with objects.

### First
set the exercises. Choose between,
an exercise with *repetitions*:
```
Exercise e = new ExerciseRep(name, description, muscleFactor, caloriesFactor, repetitions, weight, sets);
```
or with a *set duration*:
```
Exercise e = new ExerciseTimed(name, description, muscleFactor, caloriesFactor, duration of each set(min), sets);
```
### Second 
Set the person goal and stats:
```
GymMember me(name, surname, age, weight, height, muscleGoal, caloriesGoal);
```
### Third
Create a training plan with a name, a brief descripition and a duration.
```
TrainingPlan plan(name, desc, durantion(days));
```
### Fourth
Add as many exercises as you like:
```
plan.addExercise(exercise);
```
