#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main()
{
    Fraction a(4,5);
    Fraction b(7);
    Fraction c;

    c = a * b;

    cout << a << " * " << b << "= " << c << endl;

    if (a == b)
    {
        cout << "a est egal a b." << endl;
    }
    else
    {
        cout << "a n'est pas egal a b." << endl;
    }
    
    return 0;
}