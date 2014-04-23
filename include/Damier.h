#ifndef DAMIER_H
#define DAMIER_H

#include <SFML/Graphics.hpp>
#include <vector>


class Damier
{
        public:
            static Damier& Instance();

            Damier();
            ~Damier();
        private:
            Damier& operator= (const Damier&){}
            Damier (const Damier&){}

            static Damier m_instance;
};

#endif // DAMIER_H
