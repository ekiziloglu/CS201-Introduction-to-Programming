//
//  main.cpp
//  NESTED LOOPS
//
//  Created by Eralp  Kızıloğlu on 22.04.2022.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    /*
    for(int x = 0;x < 10 ; x++){
        for(int y = 0; y < 10 ; y++){
            cout<<x<<" "<<y<<endl;
        }
    }
    */
    for(int x = 0;x <= 3 ; x++){
        for(int y = 0; y <= 3 ; y++){
            for(int z = 0; z<= 3 ; z++){
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
        }
    }
    
    return 0;
}
