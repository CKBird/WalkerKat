//main.cpp is a test for Walker class (.h and .cpp)
//Christopher Bird 
//14 October, 2015
//For aid of Katie Kowalski

#include <iostream>
#include <string>

#include "Walker.h"

using namespace std;

int main () {
	cout << "Hello, Walker.h compiled properly" << endl;
	
	Walker w;
	w.set_x(1);
	w.set_y(2);
	
	cout << w.get_x() << " " << w.get_y() << endl;
	
	cin >> w;
	cout << w;
	
	return 0;
}