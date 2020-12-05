#include <iostream>
#include "Food.h"
#include "Noodle.h"
#include "Chicken.h"

using namespace std;

int main(){
	Noodle noodle;
	noodle.addBahan(noodle.bahan);
	noodle.plating();
	noodle.cook();
	
	Chicken chicken;
	chicken.addBahan(chicken.bahan);
	chicken.plating();
	chicken.cook();
}
