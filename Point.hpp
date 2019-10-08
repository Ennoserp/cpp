#ifndef POINT
#define POINT

class Point{
    
    
    private:
        int x;
        int y;
        int z;
        static int compteur;

    public:
        Point();
        Point(int,int);
        ~Point();

        void setX(int);
        void setY(int);
        void setZ(int);

        int getX();
        int getY();
        int getZ();

        void deplacerDe(int,int,int);
        void deplacerVers(int,int,int);

        static int getCompteur();
};

#endif