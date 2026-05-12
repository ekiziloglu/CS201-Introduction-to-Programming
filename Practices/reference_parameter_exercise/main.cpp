//
//  main.cpp
//  REFERENCEPARAMETER
//
//  Created by Eralp  Kızıloğlu on 24.04.2022.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/*
double average (int a, int b) {
    double avr;
    cout << "Beginning of function average: a = " << a << ", b = " << b << endl;
    a = a + b;
    avr = a / 2.0;
    cout << "End of function average: a = " << a << ", b = " << b << endl;
    return avr;
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "In main before calling average: num1 = " << num1 << ", num2 = " << num2 << endl;
    // cout << "Average is " << average(num1, num2) << endl;
    double avr = average(num1, num2);
    cout << "Average is " << avr << endl;
    cout << "In main after calling average: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    return 0;
}
*/

/*
double average (int & a, int b) {
    double avr;
    cout << "Beginning of function average: a = " << a << ", b = " << b << endl;
    a = a + b;
    avr = a / 2.0;
    cout << "End of function average: a = " << a << ", b = " << b << endl;
    return avr;
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "In main before calling average: num1 = " << num1 << ", num2 = " << num2 << endl;
    // cout << "Average is " << average(num1, num2) << endl;
    double avr = average(num1, num2);
    cout << "Average is " << avr << endl;
    cout << "In main after calling average: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    return 0;
}
*/
int roots (double a, double b, double c, double & r1, double  & r2) {
    // pre: a,b,c are the coefficients of x^2, x and 1
    // post: returns the roots as reference parameters,
    // returns the number of roots as the function's return value
    double disc = b*b-4*a*c;
    if (disc > 0) {
        r1 = (-b+sqrt(disc))/(2*a);
        r2 = (-b-sqrt(disc))/(2*a);
        return 2;
    }
    else if (disc == 0) {
        r1 = -b/(2*a);
        return 1;
    }
    else
        return 0;
}

int main() {
    
    double coefx2, coefx, coef1, root1, root2;
    int numroots;
    
    cout << "Enter the coefficients for x^2, x and 1: ";
    cin >> coefx2 >> coefx >> coef1;
    
    numroots = roots(coefx2, coefx, coef1, root1, root2);
    
    if (numroots == 0)
        cout << "No roots " << endl;
    else if (numroots == 1)
        cout << "There is only one root and it is " << root1 << endl;
    else
        cout << "There are two roots and they are " << root1 << " and " << root2 << endl;
    
    return 0;
}
