#ifndef POINT
#define POINT


class Point{
    private:
        int x;
        int y;

    public:
        Point();
        Point(int,int);
        ~Point();

        void setX(int);
        int getX();

        void setY(int);
        int getY();

};

const Point ORIGINE(0,0);

#endif