//
//  main.cpp
//  countwordsfromfile
//
//  Created by Eralp  Kızıloğlu on 8.06.2022.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(){
    string word, filename;
    ifstream input;
    int count = 0;
    
    cout<<"Please enter the filename: ";
    cin>>filename;
    
    input.open(filename.c_str());
    
    while(input>>word){
        count++;
    }
    cout<<count<<" number of words have been read."<<endl;
    
    return 0;
}


//IF WE FACE INTEGERS WHILE READING FILE, THIS IS HOW WE DO IT

/*
int main(){
    string filename;
    ifstream input;
    int number;
    int count = 0;
    
    cout<<"Please enter filename: ";
    cin>>filename;
    
    input.open(filename.c_str());
    if(input.fail()){  //checks if it opens succesfully
        cout<<"Failed to open the file."<<endl;
        return 0;
    }
    
    
    while( ! input.eof()){
        if(input >> number){
            count++;
        }
        else{
            string str;
            input.clear();
            input>>str;
        }
    }
    cout<<count<<" many numbers have been read."<<endl;
    
    
    return 0;
}
*/
