#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

#include "Damier.h"

Damier::Damier()
{

}

Damier::~Damier()
{
    cout<<"Destruction Damier"<<endl;
}

Damier Damier::m_instance=Damier();


Damier& Damier::Instance()
{
    return m_instance;
}
