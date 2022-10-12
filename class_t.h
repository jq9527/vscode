#include"JQ_LIB.h"

#ifndef CLASS
#define CLASS

class base1 {
    private:
        int a;
    public:
       base1 (int a):a(a){};
        virtual void show (){
           std::cout<<a;
        };
        int geta (){
            return a;
        }
};

class base2: public  base1 {
    private :
        int b;
    public:
        base2(int b1,int b2):base1(b1),b(b2){};
       void show () {
            std::cout<<b;
        }
        int getb (){
            return b;
        }
};

class base3: public  base2 {
    private :
        int c;
    public:
        base3 (int c1,int c2,int c3):base2(c1,c2),c(c3){};
      void show () {
            std::cout<<c;
        }
};

#endif