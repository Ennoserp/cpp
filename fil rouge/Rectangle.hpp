#ifndef RECTANGLE
#define RECTANGLE

class Rectangle{
    private:

        int x;//abscisse origine
        int y;//ordonnée origine
        int w;//width
        int h;//height

    public:

        Rectangle();
        Rectangle(int,int,int,int);
        Rectangle(int,int,int,int,int);

        void setX(int);
        int getX();

        void setY(int);
        int getY();

        void setW(int);
        int getW();

        void setH(int);
        int getH();


        
};


#endif