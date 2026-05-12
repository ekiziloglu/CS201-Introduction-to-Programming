//
//  main.cpp
//  PRINTSTARS
//
//  Created by Eralp  Kızıloğlu on 22.04.2022.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int size;
    cout<<"Please enter a size: ";
    cin>>size;
    for(int x = 1; x<= size; x++){
        for(int i = 1; i<x; i++){
            cout<<" ";
        }
        for(int y = 1; y<= size-x+1; y++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}
