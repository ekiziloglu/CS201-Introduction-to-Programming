//
//  main.cpp
//  MATRIX
//
//  Created by Eralp  Kızıloğlu on 22.04.2022.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int size1;
    cout<<"Please enter the size: ";
    cin>>size1;
    for(int i = 1; i <= size1;i++){
        for(int j = 1; j <= size1; j++){
            if(i + j == (size1 + 1)){
                cout<<1;
            }
            else{
                cout<<0;
            }
            
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    int size2;
    cout<<"Please enter a size: ";
    cin>>size2;
    for(int i=1; i<= size2; i++){
        for(int j = 1; j<= size2; j++){
            if(i==j){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
