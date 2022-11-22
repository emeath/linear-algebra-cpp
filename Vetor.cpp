#include "Vetor.hpp"

Vetor::Vetor(int x, int y) : x(x), y(y)
{
}

Vetor::~Vetor()
{
}

Vetor Vetor::operator+(Vetor v)
{
    int resultX = this->x + v.getX();
    int resultY = this->y + v.getY();
    Vetor result(resultX, resultY);
    return result;
}

Vetor Vetor::operator-(Vetor v)
{
    int resultX = this->x + v.getX();
    int resultY = this->y + v.getY();
    Vetor result(resultX, resultY);
    return result;
}

Vetor Vetor::operator*(Vetor v)
{
    int resultX = this->x + v.getX();
    int resultY = this->y + v.getY();
    Vetor result(resultX, resultY);
    return result;
}

std::string Vetor::getVetor(){
    return "Vetor(x: " + std::to_string(this->getX()) + "; y: " + std::to_string(this->getY()) + ").";
}

int Vetor::getX() const
{
    return this->x;
}

int Vetor::getY() const
{
    return this->y;
}
