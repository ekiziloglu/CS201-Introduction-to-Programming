//
//  main.cpp
//  STREAMSEXERCISE
//
//  Created by Eralp  Kızıloğlu on 7.06.2022.
//

#include <iostream>
#include <string>

using namespace std;

//Counting words of the keyboard solutions(Sentinel version and Non-sentinel version)

/*
int main(){
    string word;
    int countWords = 0;
    
    cout<<"Enter words, enter \"end\" to stop: ";
    cin>>word;
    while(word != "end"){
        countWords++;
        cin>>word;
    }
    cout<<countWords<<" words have been read."<<endl;
    
    return 0;
}
*/

//Non-sentinel version uses ctrl-D to stop stream


int main(){
    string word;
    int countWords = 0;
    cout<<"Enter words, enter kntrl+d to stop: ";
    while(cin>>word){
        countWords++;
    }
    cout<<endl;
    cout<<countWords<<" words have been entered"<<endl;
    
    
    
    return 0;
}

