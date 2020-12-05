#include <iostream>

using namespace std;

class MyGula{
private:
    int berat;
public:
    //constructor
    MyGula(int berat){
        cout << "2. Beli banyak-banyak MyGula" << endl;
        this->berat = berat;
    }
    //destructor
    ~MyGula(){
        cout << "9. Buang gula" << endl;
    }
    //prosedur print
    void print(){
        cout << "4. Tuang gula " << berat << " kilogram" << endl;
    }
};

class Air{
private:
    float liter;
public:
    //constructor
    Air(float liter){
        cout << "Resep diabetes:" << endl;
        cout << "1. Ambil sedikit air" << endl;
        this->liter = liter;
    }
    //destructor
    ~Air(){
        cout << "10. Buang air panas" << endl;
    }
    //prosedur print
    void print(){
        cout << "5. Tuang air panas " << liter << " liter" << endl;
    }
};

class SariHarum{
private:
    int jumlah_bag;
public:
    //constructor
    SariHarum(int X){
        cout << "3. Beli SariHarum" << endl;
        this->jumlah_bag = X;
    }
    //destructor
    ~SariHarum(){
        cout << "8. Buang SariHarum" << endl;
    }
    //prosedur print
    void print(){
        cout << "6. Ambil SariHarum " << jumlah_bag << " bag" << endl;
    }
};

class Teh{
private:
    Air A;
    MyGula G;
    SariHarum S;
public:
    //constructor
    Teh(Air a1, MyGula g1, SariHarum s1) : A(a1), G(g1), S(s1){
        cout << endl;
        g1.print();
        a1.print();
        s1.print();
        cout << endl;
    }
    //prosedur print
    void print(){
        cout << "7. Jadilah teh!" << endl;
        cout << endl;
    }
};

int main(){
    (new Teh(Air(1), MyGula(5), SariHarum(1)))->print();
    return 0;
}