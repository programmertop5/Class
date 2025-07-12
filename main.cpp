#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction f1(1, 5);
    Fraction f2(2, 7);

    cout << "Original fractions:" << endl;
    cout << "f1 = ";
    f1.Print();
    cout << "\nf2 = ";
    f2.Print();
    cout << "\n\n";

    
    Fraction result = f1.addInteger(2);
    cout << "f1 + 2 = ";
    result.Print();
    cout << endl;

   
    result = f1.subtractInteger(1);
    cout << "f1 - 1 = ";
    result.Print();
    cout << endl;

    
    result = f1.addFraction(f2);
    cout << "f1 + f2 = ";
    result.Print();
    cout << endl;

   
    result = f1.subtractFraction(f2);
    cout << "f1 - f2 = ";
    result.Print();
    cout << endl;

    
    result = f1.multiplyByInteger(3);
    cout << "f1 * 3 = ";
    result.Print();
    cout << endl;


    result = f1.multiplyByFraction(f2);
    cout << "f1 * f2 = ";
    result.Print();
    cout << endl;


    result = f1.divideByFraction(f2);
    cout << "f1 / f2 = ";
    result.Print();
    cout << endl;

    
    result = f1.divideByInteger(2);
    cout << "f1 / 2 = ";
    result.Print();
    cout << endl;

    return 0;
}
