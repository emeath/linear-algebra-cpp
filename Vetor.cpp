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
    int resultX = this->x - v.getX();
    int resultY = this->y - v.getY();
    Vetor result(resultX, resultY);
    return result;
}

int Vetor::operator*(Vetor v)
{
    int result = (this->x * v.getX()) + (this->y * v.getY());   
    return result;
}

void Vetor::operator*(int n)
{
    this->x = this->x * n;
    this->y = this->y * n;
}

std::string Vetor::getVetor(){
    return "Vetor(x: " + std::to_string(this->getX()) + "; y: " + std::to_string(this->getY()) + ").";
}

float Vetor::getModule()
{
    float module = sqrt((*this) * (*this));
    return module;
}

float Vetor::angleBetweenVector(Vetor v){
    float angle = acos(((*this) * v) / (this->getModule() * v.getModule()));
    return angle * 180 / PI;
}

int Vetor::getX() const
{
    return this->x;
}

int Vetor::getY() const
{
    return this->y;
}
