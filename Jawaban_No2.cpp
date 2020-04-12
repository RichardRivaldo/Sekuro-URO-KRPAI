#include <iostream>

using namespace std;

class Titik{

private:
    int X;
    int Y;

public:

    Titik() {
        X = 0;
        Y = 0;
    }

    Titik(int X, int Y) {
        this->X = X;
        this->Y = Y;
    }

    int getX() {
        return X;
    }

    int getY() {
        return Y;
    }

    void setX(int X) {
        this->X = X;
    }

    void setY(int Y) {
        this->Y = Y;
    }

};

class Garis{

private:
    Titik t1;
    Titik t2;

public:

    Garis() {
        t1.setX(0);
        t1.setY(0);
        t2.setX(0);
        t2.setY(0);
    }

    Garis(int x1, int y1, int x2, int y2) {
        t1.setX(x1);
        t1.setY(y1);
        t2.setX(x2);
        t2.setY(y2);
    }

    void print() {
        cout << "(" << t1.getX() << "," << t1.getY() << ")";
        cout << endl;
        cout << "(" << t2.getX() << "," << t2.getY() << ")";
    }

};
