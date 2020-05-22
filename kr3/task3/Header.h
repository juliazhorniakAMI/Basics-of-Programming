#ifndef HEADER_H
#define HEADER_H



struct Triangle
{
public:
    int a, b, c;

    Triangle(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    int P() {
        return a + b + c;
    }
};


#endif
