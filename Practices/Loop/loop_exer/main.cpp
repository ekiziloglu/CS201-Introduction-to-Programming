//
//  main.cpp
//  LOOPEXERCISE2
//
//  Created by Eralp  Kızıloğlu on 21.04.2022.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
/*
    int x = 0;
    int y = 0;
    int total = 0;
    while(x != -1){
        cout<<"Please enter a value: ";
        cin>>x;
        y++;
        total += x;
    }
    y--;
    total++;
    cout<<double(total/y)<<endl;
*/
    int x = 0;
    double y = 0.0;
    int total = 0;
    while(true){
        cout<<"Please enter a value: ";
        cin>>x;
        if(x==-1){
            break;
        }
        
        y++;
        total += x;
    }

    cout<<total/y<<endl;

    return 0;
}
