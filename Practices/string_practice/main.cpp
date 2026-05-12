//
//  main.cpp
//  STRINGS
//
//  Created by Eralp  Kızıloğlu on 24.04.2022.
//

#include <iostream>
#include <string>
using namespace std;
/*
int main(){
    string s = "Programming is a creative process";
    cout<<s.at(3)<<endl;
    cout<<s<<endl;
    s.at(3) = 'E';
    cout<<s<<endl;
    string t = "cs201";
    t[t.length()] = '3'; //does not give error
    cout<<t<<endl;
    return 0;
}
*/
string remove(string s1, string s2){
    string result = s1;
    unsigned int k = s1.find(s2);
    if(k != string::npos){
        result = s1.substr(0,k) + s1.substr(k + s2.length());
    }
    return result;
}

int main(){
    string sentence = "Today is monday";
    cout<<remove(sentence,"day")<<endl;
    return 0;
}
