//
//  main.cpp
//  MULTIPLICATION TABLE
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
        for(int y = 1; y<= size; y++){
            cout<<x*y<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
