//
//  main.cpp
//  PRAC
//
//  Created by Eralp  Kızıloğlu on 17.03.2022.
//


#include <iostream>
#include <string>
using namespace std;

/*
int main(){
    int a = 1;
    while(a<10){
        cout<<"Hello "<<a<<endl;
        a++;// a += 1
    }
    return 0;
}
*/

/*
int main(){
    for(int i=0;i<10;i++){    //initialization,condition,iteration
        cout<<"hello"<<i<<endl;
    }
    return 0;
}
*/
/*
int main(){
    int x = 100;
    do{
        
        cout<<"merhaba"<<x<<endl;
        x++;
    }while(x<10);
    
    return 0;
}
*/

//DO WHILE ALLOWS US TO DO WHAT WE WANT END CHECK CONDITION AT THE END THAT IS WHY MERHABA IS PRINTED.

/*
int main(){
    for(int x = 1; x < 101; x += 2){
        cout<<x<<endl;
    }
    return 0;
}
*/

/*
int main(){
    int x = 50;
    for(x; x<71; x++){
        if (x % 2 == 0){
            cout<<x<<endl;
        }
    }
    return 0;
}
*/

/*
int main(){
    int x = 70;
    for(x; x<101; x++){
        if(x % 7 == 0){
            cout<<x<<endl;
        }
    }
    return 0;
}
*/

/*
int main(){
    int x = 1;
    for(x; x < 101 ; x++){
        if(x % 3 == 0 && x % 7 == 0){
            cout<<x<<endl;
        }
    }
    return 0;
}
*/

/*
int main(){
    int x = 1;
    for (x; x <= 100; x++){
        if (x % 3 == 0 && x % 7 == 0){
            cout<<"FizzBuzz"<<endl;
        }
        else if (x % 3 == 0){
            cout<<"Fizz"<<endl;
        }
        else if (x % 7 == 0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    
    return 0;
}
*/

/*
int main(){
    float total = 0;
    int nums = 0;
    bool exit = true;
    while(exit){
        int num;
        cout<<"Please enter a number: ";
        cin>>num;
        if (num == -1){
            exit = false;
        }
        else{
            total += num ;
            nums++;
        }
    }
    float avg = total / nums;
    cout<<"This is your average of "<<nums<<" numbers: "<<avg<<endl;
    return 0;
}
*/

/*
int main(){    //This is how you use break
    bool exit = true;
    while(exit){
        int num;
        cout<<"Enter a number: ";
        cin>>num;
        if(num == -1){
            break;
        }
        
    }
    return 0;
}
*/

/*
int main(){
    for(int x = 0; x < 11; x++){
        if( x == 5){    //BECAUSE WE SAID CONTINUE WHEN X IS 5 HELLO WILL NOT BE EXECUTED FOR THAT NUMBER
            continue;
        
        }
        cout<<"Hello"<<x<<endl;
    }
    return 0;
}
*/

