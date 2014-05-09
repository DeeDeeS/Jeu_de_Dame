#ifndef PIONS_H
#define PIONS_H


class Pions
{
    public:

        int getX();
        int getY();
        void setColor(char color);
        void setBool(bool);
        void setY(int y);
        void setX(int x);
        bool isDame();
        void DeplacePions(int x, int y);
        void DeplaceDames();
        void MangePions();
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
