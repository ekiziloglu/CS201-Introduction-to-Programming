//
//  main.cpp
//  PRAC2
//
//  Created by Eralp  Kızıloğlu on 20.03.2022.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    int x = 1;
    int y = 1;
    int nums;
    cout<<"Please enter how many elements of Fibonacci series you want to see: ";
    cin>>nums;
    if (nums == 2){
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }
    else if(nums == 1){
        cout<<"1"<<endl;
    }
    else{
        cout<<x<<endl;
        cout<<x<<endl;
        while(nums-2 > 0){
            int z = x + y;
            cout<<z<<endl;
            x = y;
            y = z;
            nums--;
        }
        
    }
    return 0;
    
}
    
