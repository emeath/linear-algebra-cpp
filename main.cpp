#include <iostream>
#include "Vetor.hpp"

using namespace std;

int main()
{
    Vetor u(-1, 3);
    Vetor v(10, 20);
    
    cout << "(u + v) = " << (u + v).getVetor() << endl;
    cout << "(v + u) = " << (v + u).getVetor() << endl;
    return 0;
}