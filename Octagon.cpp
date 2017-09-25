#include "Octagon.h"
#include <iostream>
#include <cmath>

Octagon::Octagon() : Octagon(0)  {
}
	
Octagon::Octagon(size_t i) : side_a(i) {
	std::cout << "Octagon created: " << side_a << std::endl;
}

Octagon::Octagon(std::istream &is) {
	is >> side_a;
}

double Octagon::Square() {
	return 2 * (sqrt(2) + 1) * side_a * side_a; 
	// S = 2*cot(pi/8)*a^2 = 2*(sqrt(2) + 1) * a^2
}

void Octagon::Print() {
	std::cout << "a=" << side_a << ", b=" << side_a << ", c=" << side_a << ", d=" << side_a << ", e=" << side_a << ", f=" << side_a << ", g=" << side_a << ", h=" << side_a << std::endl;
}

Octagon::~Octagon() {
	std::cout << "Octagon deleted" << std::endl;
}
