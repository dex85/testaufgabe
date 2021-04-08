/* shapes.h  */
#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <math.h>

// quadrat
#define sqr(y) pow(y,2)

class quadrat {
private:
public:
	float a;
	quadrat() {}
	quadrat(float a1) {a = a1;}
	float get_umfang() {return 4*a;};
	float get_flaeche() {return sqr(a);};
};

class rechteck : public quadrat {
public:
    float b;
	rechteck () {}
	rechteck (float a1, float b1) {a = a1; b = b1;}
	float get_umfang() {return 2*(a+b);};
	float get_flaeche() {return (a*b);};
};

class drachenviereck : public rechteck {
public:
    float e,f;
	drachenviereck () {}
	drachenviereck (float a1, float b1, float e1, float f1) {a = a1; b = b1;e = e1; f = f1;}
	float get_flaeche() {return (0.5*e*f);};
};

class viereck : public drachenviereck {
public:
    float c,d;
	viereck () {}
	viereck (float a1, float b1,float c1, float d1, float e1, float f1) {a = a1; b = b1;c = c1; d = d1;e = e1; f = f1;}
	float get_umfang() {return (a+b+c+d);};
	float get_flaeche() {return 0.25*sqrt(4*sqr(e)*sqr(f)-sqr(sqr(b)+sqr(d)-sqr(a)-sqr(c)));};

    void print_values() {std::cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f;}

};

#endif /* SHAPES_H  */
