#include "Foursquare.h"
#include <iostream>
#include <cmath>

Foursquare::Foursquare() : Foursquare(0)  {
}
	
Foursquare::Foursquare(size_t i) : side_a(i) {
	std::cout << "Foursquare created: " << side_a << std::endl;
}

Foursquare::Foursquare(std::istream &is) {
	is >> side_a;
}

Foursquare::Foursquare(const Foursquare& orig) {
	std::cout << "Foursquare copy created" << std::endl;
	side_a = orig.side_a;
}
double Foursquare::Square() {
	return side_a * side_a;
}

void Foursquare::Print() {
	std::cout << "a=" << side_a << ", b=" << side_a << ", c=" << side_a << ", d=" << side_a << std::endl;
}

Foursquare::~Foursquare() {
	std::cout << "Foursquare deleted" << std::endl;
}
