//
//  main.cpp
//  sum10validnums
//
//  Created by Eralp  Kızıloğlu on 7.06.2022.
//

#include <iostream>
#include <string>
using namespace std;
/*
int main(){

    int sum, num;
    sum = 0;
    cout<<"Enter your numbers: ";
    for(int i = 1; i <= 10;i++){
        cin>>num;
        sum += num ;
    }
    cout<<"sum = "<<sum<<endl;
    
    return 0;
}
*/


//IN A CASE OF USER ENTERING STRING INSTEAD OF NUM:

int main(){
    int sum, num;
    sum = 0;
    cout<<"Enter your numbers: ";
    for(int i = 1; i <= 10;){
        if(cin>>num){
            i++;
            sum += num ;
        }
        else{
            string err;
            cin.clear();  //stuck in the error state so we are getting out of it
            cin>>err;
            cout<<err<<" is not a number!"<<endl;
        }
        
    }
    cout<<"sum = "<<sum<<endl;
    
    return 0;
    
    
    return 0;
}
//Try these inputs:   15  abc  a5c  a2   23b   12.5
