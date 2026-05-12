//
//  main.cpp
//  avrgWordLen
//
//  Created by Eralp  Kızıloğlu on 9.06.2022.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Calculates average length
double averageWordLength(ifstream & input,int & counter){   //always pass streams by referance!!!
    string word;
    counter = 0;   //counting number of words
    int sumLength = 0; // length of that word added
    
    
    while(input>>word){
        sumLength += word.length();
        counter++;
        
    }
    
    double avgWordlength = (double) sumLength / counter;
    return avgWordlength;
    
}


string longestWord(ifstream & input){
    string word,longest = "";
    while(input >> word){
        if(word.length() > longest.length()){
            longest = word;
        }
    }
    
    return longest;
}



int main(){
    string filename;
    string word;
    ifstream input;
    int countWords = 0;
    
    cout<<"Enter filename please: ";
    cin>>filename;
    
    input.open(filename.c_str());
    if(input.fail()){
        cout<<"Failed to open the file."<<endl;
        return 0;
    }
    
    double avgWordlength = averageWordLength(input,countWords);
    
    cout<<"The average length of "<<countWords<<" many words is "<<avgWordlength<<endl;
    
    
    input.clear();  //we clear first (it might be in a failure state
    input.seekg(0); // we return to the starting point after the end
    
    cout<<"The longest word is: "<<longestWord(input)<<endl;
    
    input.clear();
    input.seekg(0);
    
    
    
    int counter2 = 0;  //counter for words with a higher length then average
    
    while(input >> word){
        if(word.length() > avgWordlength ){
            counter2++;
            cout<<word<<endl;
        }
    }
    
    cout<<"There are "<<counter2<<" many words with higher length."<<endl;
    
    
    
    return 0;
}

//WHY IS IT OKAY TO WRITE FILE DIFFERENTLY? (Test,TEST,test etc.)
