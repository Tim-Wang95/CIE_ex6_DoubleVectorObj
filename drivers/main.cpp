#include "DoubleVector.hpp"

int main() {

	cie::DoubleVector v1(3); cie::DoubleVector v2(3);
	std::cout << "For v1 "; cie::userInput(v1); 
	std::cout << "For v2 "; cie::userInput(v2);
	std::cout << "v1 became "; cie::print(v1); 
	std::cout << "v2 became "; cie::print(v2);
	int dotproduct = cie::dotProduct(v1, v2);
	std::cout << "The dot product of the 2 vectors is: " << dotproduct;
	std::cout << std::endl << std::endl;
	v1.push_back(1); v2.push_back(1);
	int dotproduct2 = cie::dotProduct(v1,v2);
	std::cout << "The new dot product of the 2 vectors is: " << dotproduct2;
	std::cout << std::endl;

	return 0;
}