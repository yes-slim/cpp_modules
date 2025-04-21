#include "Intern.hpp"

int main() {
  try {
    	Intern stagaire;
    	AForm *rrf;
    	rrf = stagaire.makeForm("shrubbery request", "FORM");
  	}
  	catch (std::exception &e) {
    	std::cerr << e.what() << std::endl;
  	}
}