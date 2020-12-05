#include <iostream>
using namespace std;

int main(){
	int x = 5;
	int *p;
	int &r =x;
	
	p = &x;
	cout << *p << endl;
	x++;
	cout << r << endl;
}
