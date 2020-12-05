#include "Food.hpp"
#include <iostream>

using namespace std;

Food::Food() {
    this->bahan = "";
    cout << "I need to eat " ;
}

void Food::addBahan(string bahan){
    this->bahan = bahan;
    cout << "Bahan : " << this->bahan << endl;
}

void Food::cook(){
    cout << "Start cooking ... " << endl << endl;
}