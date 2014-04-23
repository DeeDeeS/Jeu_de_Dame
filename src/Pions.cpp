using namespace std;

#include "Pions.h"


Pions::Pions(char color, bool isPion, int x, int y)
{
    this->_color=color;
    this->_isPion= isPion;
    this->_x=x;
    this->_y=y;
}

int Pions::getX()
{
    return this->_x;
}

int Pions::getY()
{
    return this->_y;
}

void Pions::setX(int x)
{
    this->_x = x;
}

void Pions::setY(int y)
{
    this->_y = y;
}

bool Pions::isDame()
{
    return this->_isPion;
}

Pions::Pions()
{
    //ctor
}

Pions::~Pions()
{
    //dtor
}
