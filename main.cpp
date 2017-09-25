#include <cstdlib>
#include <iostream>
#include "Triangle.h"
#include "Foursquare.h"
#include "Octagon.h"


void menu(void);



int main(int argc, char** argv) {
	
	int choise;
 
    Triangle* triangle_ptr = nullptr;
    Foursquare* foursquare_ptr = nullptr;
    Octagon* octagon_ptr = nullptr;

    do {
		menu();
		std::cin >> choise;
		switch(choise) {
			case 1 :
				if (triangle_ptr != nullptr) delete triangle_ptr;
	            std::cout << "Enter triangle's sides" << std::endl;
	          	triangle_ptr = new Triangle(std::cin);
				break;
			case 2 :
				if (foursquare_ptr != nullptr) delete foursquare_ptr;
	            std::cout << "Enter foursquare's side" << std::endl;
	            foursquare_ptr = new Foursquare(std::cin);
				break;
			case 3 :
				if (octagon_ptr != nullptr) delete octagon_ptr;
	            std::cout << "Enter octagon's side" << std::endl;
	            octagon_ptr = new Octagon(std::cin);
				break;
			case 4 :
				if(triangle_ptr == nullptr) {
                std::cout << "Triangle doesn't exist." << std::endl;
	            } else {
	                triangle_ptr->Print();
	            }
				break;
			case 5 :
				if(foursquare_ptr == nullptr) {
                std::cout << "Foursquare doesn't exist." << std::endl;
	            } else {
	                foursquare_ptr->Print();
	            }
				break;
			case 6 :
				if(octagon_ptr == nullptr) {
                std::cout << "Octagon doesn't exist." << std::endl;
	            } else {
	                octagon_ptr->Print();
	            }
				break;
			case 7 :
				if(triangle_ptr == nullptr) {
                std::cout << "Triangle doesn't exist." << std::endl;
	            } else {
	                std::cout << "Triangle's square: " << triangle_ptr->Square() << std::endl;
	            }
				break;
			case 8 :
				if(foursquare_ptr == nullptr) {
                std::cout << "Foursquare doesn't exist." << std::endl;
	            } else {
	                std::cout << "Foursquare's square: " << foursquare_ptr->Square() << std::endl;
	            }
				break;
			case 9 :
				if(octagon_ptr == nullptr) {
                std::cout << "Octagon doesn't exist." << std::endl;
	            } else {
	                std::cout << "Octagon's square: " << octagon_ptr->Square() << std::endl;
	            }
				break;
			case 0 :
				if (triangle_ptr != nullptr) {
                delete triangle_ptr;
                std::cout << "Triangle deleted " << std::endl;
            }
            if (foursquare_ptr != nullptr) {
                delete foursquare_ptr;
                std::cout << "Foursquare deleted " << std::endl;
            }
            if (octagon_ptr != nullptr) {
                delete octagon_ptr;
                std::cout << "Octagon deleted " << std::endl;
            }
			default :	
				break;
		}
	} while(choise != 0);
    
	return 0;
}



void menu(void)
{
	printf("Menu:\n");
	printf("1) Initialize A Triangle\n");
	printf("2) Initialize A Foursquare\n");
	printf("3) Initialize An Octagon\n");
	printf("4) Print A Triangle's sides\n");
	printf("5) Print A Foursquare's sides\n");
	printf("6) Print An Octagon's sides\n");
	printf("7) Print A Triangle's Square\n");
	printf("8) Print A Foursquare's Square\n");
	printf("9) Print An Octagon's Square\n");
	printf("0) Exit\n");
}
