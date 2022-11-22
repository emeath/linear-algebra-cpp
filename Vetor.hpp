#pragma once

#include <string>
#include <cmath>

#define PI 3.14159265

class Vetor
{
    private:
        int x;
        int y;
    public:
        Vetor(int x, int y);
        ~Vetor();
        Vetor operator+(Vetor v);
        Vetor operator-(Vetor v);
        int operator*(Vetor v);
        void operator*(int n);
        float getModule();
        std::string getVetor();
        float angleBetweenVector(Vetor v);
        int getX() const;
        int getY() const;
};