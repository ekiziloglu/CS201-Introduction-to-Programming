//
//  main.cpp
//  countChars
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
    int countLines = 0;int countChars = 0; int countSpaces = 0; int countTabs = 0;
    char ch;
    
    cout<<"Please enter the file name: ";
    cin>>filename;
    
    input.open(filename.c_str());
    if(input.fail()){
        cout<<"File could not be opened."<<endl;
        return 0;
    }
    while(input.get(ch)){
        countChars++;
        
        if(ch == '\n'){
            countLines++;
        }
        else if(ch == ' '){
            countSpaces++;
        }
        else if(ch == '\t'){
            countTabs++;
        }
        
        
    }
    
    cout<<"There are "<<countLines<<" many lines in this file."<<endl;
    cout<<"There are "<<countChars<<" many characters in this file."<<endl;
    cout<<"There are "<<countSpaces<<" many spaces in this file."<<endl;
    cout<<"There are "<<countTabs<<" many tabs in this file."<<endl;
    
    
    return 0;
}
