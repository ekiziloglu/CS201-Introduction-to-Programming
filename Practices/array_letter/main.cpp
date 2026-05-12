//
//  main.cpp
//  lettersarray
//
//  Created by Eralp  Kızıloğlu on 11.06.2022.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    
    const int SIZE = 'z' - 'a' + 1;
    int counts[SIZE];  //ARRAY OF 26 INTEGERS
    string filename;
    ifstream input;
    char ch;
    
    
    
    //initializing counting
    for(int i = 0; i < SIZE ; i++){
        counts[i] = 0;   //from zeroth element to 25th element total of 26 elements
    }
    
    
    //open and read file
    
    cout<<"Please enter the filename: ";
    cin>>filename;
    
    input.open(filename.c_str());
    if(input.fail()){
        cout<<"Failed to open."<<endl;
        return 0;
    }
    
    while(input.get(ch)){
        if(isalpha(ch)){
            ch = tolower(ch);
            counts[ch - 'a']++;
            
        }
    }
    for(int i = 0 ; i < SIZE ; i++){
        cout<<(char)('a' + i )<<": "<<counts[i]<<endl; 
    }
    /*
    int num;
    cout<<"Enter num: ";
    cin>>num;
    
    const int num1 = num;
    
    
    cout<<num1<<endl;
    */
    return 0;
}
