// Implementasikan kelas noodle dan chicken yang mewarisi kelas food 
// dan mengimplementasi method cook. 

// Jika file main dijalankan, maka akan menghasilkan :
// I need to eat noodle.
// Bahan : Mie
// Boiling noodle!
// Start cooking ... 

// I need to eat chicken.
// Bahan : Tepung
// Frying chicken
// Start cooking ... 

#ifndef FOOD_HPP
#define FOOD_HPP
#include <iostream>
#include <string.h>

using namespace std;
	
class Food {
    public :
        Food();
        void addBahan(string bahan);
        void cook();
        void plating();
        
    protected:
        string bahan;
        
};

#endif

