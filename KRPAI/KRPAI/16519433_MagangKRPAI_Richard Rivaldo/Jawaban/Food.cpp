#include "Food.h"
#include <iostream>

using namespace std;

Food::Food() {
    this->bahan = "";
}

void Food::addBahan(string bahan){
    this->bahan = bahan;
    cout << "Bahan : " << this->bahan << endl;
}

void Food::cook(){
    cout << "Start cooking ... " << endl << endl;
} 


