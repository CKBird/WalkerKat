//This is going to be where all the functions do things

#include <iostream>
#include <stdexcept>
#include "Walker.h"

using namespace std;


Walker::Walker() {
	x = 0;
	y = 0;
}

Walker::~Walker() {
	
}

void Walker::move_by(int dx, int dy) { 	//This should take the starting coordinates and add the	
	x += dx;
	y += dy;	
	return;
};
