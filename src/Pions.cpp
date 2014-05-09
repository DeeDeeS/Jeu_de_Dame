using namespace std;

#include "Pions.h"


void Pions::DeplacePions(int x, int y)
{

    this->setX(x);
    this->setY(y);
}
void Pions::DeplaceDames()
{

}
void Pions::MangePions()
{

}


Pions::~Pions()
{
    //dtor
}

Pions::Pions()
{

    this->_color='x';
    this->_isPion= true;
    this->_x=0;
    this->_y=0;

}




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


void Pions::setColor(char color)
{
  this->_color=color;
}
void Pions::setBool(bool b)
{
    this->_isPion=b;
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


