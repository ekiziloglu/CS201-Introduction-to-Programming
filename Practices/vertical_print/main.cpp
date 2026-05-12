//
//  main.cpp
//  PRINTLETTERSVERTICALLY
//
//  Created by Eralp  Kızıloğlu on 24.04.2022.
//

#include <iostream>
#include <string>
using namespace std;
void printVertical(string s){
    unsigned int i = 0;
    while(i<s.length()){
        cout<<s.substr(i,1)<<endl;
        i++;
    }
}
int main(){
    string sentence;
    cout<<"Please enter a string: ";
    cin>>sentence;
    printVertical(sentence);
    return 0;
}
