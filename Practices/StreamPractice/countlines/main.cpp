//
//  main.cpp
//  countlines
//
//  Created by Eralp  Kızıloğlu on 10.06.2022.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string filename,line;
    ifstream input;
    int countLines = 0;int countChars = 0;
    
    cout<<"Please enter the file name: ";
    cin>>filename;
    
    input.open(filename.c_str());
    if(!input.fail()){
        while(getline(input,line)){
            countLines++;
            countChars += line.length(); //lines are strings with spaces in them!!
        }
    }
    
    cout<<"There are "<<countLines<<" many lines in this file."<<endl;
    cout<<"There are "<<countChars<<" many characters in this file."<<endl;
    
    
    return 0;
}
