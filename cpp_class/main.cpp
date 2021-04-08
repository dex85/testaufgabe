#include "shapes.h"
#include <iomanip>

int main(int argc, char **argv)
{
	quadrat q1(1.5);
	rechteck r1(1.5,2.5);
	drachenviereck d1(1.5,2.5,3.5,2.);
	viereck v1(1.5,2.5,2.,3.,3.5,4.5);

	std::cout << "Quadrat Umfang: " << std::setprecision(3) << q1.get_umfang() << "\t\tQuadrat Flaeche: " << q1.get_flaeche() << "\n";
	std::cout << "Rechteck Umfang: " << r1.get_umfang() << "\t\tRechteck Flaeche: " << r1.get_flaeche() << "\n";
	std::cout << "Drachenviereck Umfang: " << d1.get_umfang() << "\tDrachenviereck Flaeche: " << d1.get_flaeche() << "\n";
	std::cout << "Viereck Umfang: " << v1.get_umfang() << "\t\tViereck Flaeche: " << v1.get_flaeche() << "\n";
	return 0;
}
