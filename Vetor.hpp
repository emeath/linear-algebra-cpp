#pragma once

#include <string>

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
        Vetor operator*(Vetor v);
        std::string getVetor();
        int getX() const;
        int getY() const;
};