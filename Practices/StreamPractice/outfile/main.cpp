//
//  main.cpp
//  outfile
//
//  Created by Eralp  Kızıloğlu on 10.06.2022.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string filename = "out.txt";
    ofstream output;
    
    //we are appending it with ios::app we are not losing previous data
    output.open(filename.c_str(), ios::app);  //if it is a new file it will be new but if there exists file in that name then it will override
    
    output << "NUMBERS" <<endl;
    
    for(int num = 1; num <= 10; num++){
        output<<num<<endl;
    }
    
    output.close();
    
    return 0;
}
//program niye çalışmıyor sor!!!
