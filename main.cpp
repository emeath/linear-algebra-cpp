#include <iostream>
#include "Vetor.hpp"

using namespace std;

int main()
{
    Vetor u(-1, 3);
    Vetor v(10, 20);

    Vetor a(-1, 2);
    Vetor b(2, 1);

    Vetor m(0, -2);
    Vetor n(2, 2);
    
    cout << "(u + v) = " << (u + v).getVetor() << endl;
    cout << "(v + u) = " << (v + u).getVetor() << endl;

    cout << "(a - b) = " << (a - b).getVetor() << endl;
    cout << "(b - a) = " << (b - a).getVetor() << endl;

    cout << "(m * n) = " << (m*n) << endl;
    cout << "(n * m) = " << (n*m) << endl;

    u*2;
    cout << "u * 2 = " << u.getVetor() << endl;
    
    cout << n.getModule() << endl;

    cout << n.angleBetweenVector(m) << endl; 

    return 0;
}