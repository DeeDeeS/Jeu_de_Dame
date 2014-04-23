#ifndef PIONS_H
#define PIONS_H


class Pions
{
    public:

        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
        bool isDame();
        Pions();
        Pions(char color, bool isPion, int x, int y);
        virtual ~Pions();

    protected:

    private:

        bool _isPion;
        int _x,_y;
        char _color;
};

#endif // PIONS_H
