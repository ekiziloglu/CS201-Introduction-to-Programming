//
//  main.cpp
//  THE1
//
//  Created by Eralp  Kızıloğlu on 3.04.2022.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout<<"The purpose of this program is to calculate your CS201 grade."<<" What is your name? ";
    cin>>name;
    double midterm_grade,final_grade;
    cout<<"Hello "<<name<<", "<<"what are your midterm and final exam grades? ";
    cin>>midterm_grade>>final_grade;
    double weighted_exam_grade,weighted_exam_avg;
    weighted_exam_grade = (0.33 * midterm_grade) + (0.35 * final_grade);
    weighted_exam_avg = weighted_exam_grade / 0.68;
    if(weighted_exam_avg < (30.0 * 0.33 + 30.0 * 0.35) / 0.68  ){
        cout<<name<<", "<<"your weighted exam average is less than 30, you will fail the course!"<<endl;
    }
    else{
        double the1,the2,the3,the4,the_ratio;
        cout<<"What are the grades of your 4 take-home exams? ";
        cin>>the1>>the2>>the3>>the4;
        double the_avg = (the1 + the2 + the3 + the4)/4;
        the_ratio = the_avg / weighted_exam_avg;
        if (the_ratio <= 2){
            cout<<"You'll get all the points earned from take-home exams!"<<endl;
            double recit_att;
            cout<<"How many days have you attended recitations? ";
            cin>>recit_att;
            double participation = recit_att / 13 * 100 ;
            double course_grade = (participation * 0.07) + (the_avg * 0.25) + (midterm_grade * 0.33) + (final_grade * 0.35);
            cout<<name<<", "<< "your grade for CS201 is: "<<course_grade<<endl;
            
        }
        else if (the_ratio > 2 && the_ratio < 3 ){
            the_avg = the_avg * (3 - the_ratio);
            cout<<"You'll get "<< the_avg <<" from the points earned from take-home exams!"<<endl;
            double recit_att;
            cout<<"How many days have you attended recitations? ";
            cin>>recit_att;
            double participation = recit_att / 13 * 100 ;
            double course_grade = (participation * 0.07) + (the_avg * 0.25) + (midterm_grade * 0.33) + (final_grade * 0.35);
            cout<<name<<", "<< "your grade for CS201 is: "<<course_grade<<endl;
        }
        else if (the_ratio >= 3){
            the_avg = 0;
            cout<<"You'll get NONE of the points earned from take-home exams!"<<endl;
            double recit_att;
            cout<<"How many days have you attended recitations? ";
            cin>>recit_att;
            double participation = recit_att / 13 * 100 ;
            double course_grade = (participation * 0.07) + (the_avg * 0.25) + (midterm_grade * 0.33) + (final_grade * 0.35);
            cout<<name<<", "<< "your grade for CS201 is: "<<course_grade<<endl;
        }
    }
    return 0;
}
