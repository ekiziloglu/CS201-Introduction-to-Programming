//
//  main.cpp
//  CS201THE2
//
//  Created by Eralp  Kızıloğlu on 20.01.2024.
//

#include <iostream>
#include <string>

using namespace std;

void getInput();
void competeResults();
void displayResults();
bool inputCheck();
double calculateMet();
double totalCalorieCalculator();


bool inputCheck(double weight,double speedWalk,double speedRun, double speedCycle, double timeWalk, double timeRun, double timeCycle){
    bool result = true;
    if(weight < 30){
        result = false;
        cout<<"Weight out of range!"<<endl;}
    else if( (speedWalk < 4 || speedWalk > 30) || (speedRun < 4 || speedRun > 30) || (speedCycle < 4 || speedCycle > 30)){
        result = false;
        cout<<"Speed out of range!"<<endl;}
    else if ((timeWalk < 0 || timeWalk > 2000) || (timeRun < 0 || timeRun > 2000) || (timeCycle < 0 || timeCycle > 2000)  ){
    result = false;
    cout<<"Minute out of range!"<<endl;}
    return result;
}

double calculateMet(double speed, string exercise){
    double MET = 0;
    if(exercise == "Walking"){
        if(speed >= 4 && speed < 6.5){
            MET = 4;}
        else if(speed >= 6.5){
            MET = 6.5;}
    }
    else if (exercise == "Running"){
        if(speed >= 4 && speed < 11){
            MET = 9;}
        else if(speed >= 11){
            MET = 12.5;}
    }
    else if(exercise == "Cycling"){
        if(speed >= 4 && speed < 20){
            MET = 6;}
        else if(speed >= 20 && speed < 25){
            MET = 8;}
        else if (speed >= 25){
            MET = 10.5;}
    }
return MET;
}

double totalCalorieCalculator(double weight,double met,double time){
    double total = 0;
    total = (met * weight)/60 * time;
    return total;}

void displayResults(double difference,double total,double goal,double weight, double walkMet, double runMet, double cyclingMet,double walkCalorie, double runCalorie, double cycleCalorie ){
    cout<<"From walking, you burned "<<walkCalorie<<" calories."<<endl;
    cout<<"From running, you burned "<<runCalorie<<" calories."<<endl;
    cout<<"From cycling, you burned "<<cycleCalorie<<" calories."<<endl;
    cout<<"You burned "<<total<<" calories."<<endl;
    
    if(goal == total){
        cout<<"Congratulations! You have reached your goal!"<<endl;}
    else if(total > goal){
        cout<<"You have surpassed your goal! You can eat something worth "<< difference<<" calories :)"<<endl;}
    else if(total < goal){
        cout<<"You did not reach your goal by "<<difference<< " calories."<<endl;
        double minutesNeededW = 0;
        minutesNeededW = (difference / (weight * walkMet))*60;
        double minutesNeededR = 0;
        minutesNeededR = (difference / (weight * runMet))*60;
        double minutesNeededC = 0;
        minutesNeededC = (difference / (weight * cyclingMet))*60;
        cout<<"You need to walk "<<minutesNeededW<<" minutes more to reach your goal or, You need to run "<<minutesNeededR<<" minutes more to reach your goal or,You need to do cycling "<<minutesNeededC<< " minutes more to reach your goal."<<endl;}
}
void computeResults(double weight, double goal, double speedWalk, double speedRun, double speedCycling, double minWalk, double minRun, double minCycling){
    double total = 0;
    double difference = 0;
    
    double Met_W = calculateMet(speedWalk, "Walking");
    double cal_W = totalCalorieCalculator(weight, Met_W, minWalk);
    
    double Met_R = calculateMet(speedRun, "Running");
    double cal_R = totalCalorieCalculator(weight, Met_R, minRun);
    
    double Met_C = calculateMet(speedCycling, "Cycling");
    double cal_C = totalCalorieCalculator(weight, Met_C, minCycling);
    
    total = cal_W + cal_C + cal_R;
    
    difference = total - goal;
    if(difference < 0){difference = difference * -1;}
    
    displayResults(difference, total, goal, weight, Met_W, Met_R,  Met_C,  cal_W,  cal_R, cal_C);
}

void getInput(string username){
    cout<<"Welcome "<<username<<", please enter your weight(kg): ";
    double weight;
    cin>>weight;
    
    cout<<username<<", please enter speed(km/h) and minutes spent in a week for the activities below: "<<endl;
    cout<<"Walking: ";
    double speedWalk,timeWalk;
    cin>>speedWalk>>timeWalk;
    
    cout<<"Running: ";
    double speedRun,timeRun;
    cin>>speedRun>>timeRun;
    
    cout<<"Cycling: ";
    double speedCycle,timeCycle;
    cin>>speedCycle>>timeCycle;
    
    double calorieBurn;
    cout<<username<<", please enter your weekly calorie burn goal: ";
    cin>>calorieBurn;
    
    if(inputCheck(weight,speedWalk,speedRun,speedCycle,timeWalk,timeRun,timeCycle)){
        computeResults(weight,calorieBurn,speedWalk,speedRun, speedCycle, timeWalk, timeRun,timeCycle);}
}


int main(){
    cout<<"Please enter your name: ";
    string username_1;
    cin>>username_1;
    getInput(username_1);
    cout<<"Please enter your name: ";
    string username_2;
    cin>>username_2;
    cout<<endl;
    getInput(username_2);
    return 0;
}
/*
 

 Sample Run 2
 Please enter your name: Burak
 Welcome Burak, please enter your weight(kg): 75
 Burak, please enter speed(km/h) and minutes spent in a week for the activities below.
 Walking: 5 100
 Running: 12 120
 Cycling: 21 200
 Burak, please enter your weekly calorie burn goal: 5500
 From walking, you burned 500 calories.
 From running, you burned 1875 calories.
 From cycling, you burned 2000 calories.
 You burned 4375 calories.
 You did not reach your goal by 1125 calories.
 You need to walk 225 minutes more to reach your goal or,
 You need to run 72 minutes more to reach your goal or,
 You need to do cycling 112.5 minutes more to reach your goal.
 
 Please enter your name: Ece
 Welcome Ece, please enter your weight(kg): 25
 Ece, please enter speed(km/h) and minutes spent in a week for the activities below.
 Walking: 5 160
 Running: 7.7 200
 Cycling: 22 150
 Ece, please enter your weekly calorie burn goal: 4000
 Weight out of range!
 
 Sample Run 3
 Please enter your name: Berkay
 Welcome Berkay, please enter your weight(kg): 70
 Berkay, please enter speed(km/h) and minutes spent in a week for the activities below.
 Walking: 50 150
 Running: 10 3000
 Cycling: 25 150
 Berkay, please enter your weekly calorie burn goal: 3000 Speed out of range!
 
 Please enter your name: Defne
 Welcome Defne, please enter your weight(kg): 60
 Defne, please enter speed(km/h) and minutes spent in a week for the activities below.
 Walking: 6 90
 Running: 8 100
 Cycling: 25 2100
 Defne, please enter your weekly calorie burn goal: 3500
 Minute out of range!

 
 
 
 */
