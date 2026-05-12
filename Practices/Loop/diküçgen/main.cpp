//
//  main.cpp
//  DİKÜÇGEN
//
//  Created by Eralp  Kızıloğlu on 22.04.2022.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int size1;
    cout<<"Please enter a size: ";
    cin>>size1;
    for(int x = 1; x<=size1; x++){
        for(int y = 1; y<=x;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    int size2;
    cout<<"Please enter a size: ";
    cin>>size2;
    for(int i = 1; i <= size2 ; i++){
        for(int j = 1; j<= size2-i; j++){
            cout<<" ";
        }
        for(int t = 1; t<=i ; t++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
