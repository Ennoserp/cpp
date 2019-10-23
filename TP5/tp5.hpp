#ifndef TP5
#define TP5

class Bavarde{
    private:
        int n;
    public:
        Bavarde();
        Bavarde(int);
        Bavarde(const Bavarde &);
        ~Bavarde();

};



void test1(Bavarde);

#endif