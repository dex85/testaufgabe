/* shapes.h  */
#ifndef SHAPES_H
#define SHAPES_H

#include <math.h>

// quadrat
#define sqr(y) pow(y,2)

// funktionen überladen nachgebildet...
#define get_umfang(viereck_typ) _Generic(viereck_typ, quadrat: umfang_quadrat, rechteck: umfang_rechteck, drachenviereck:  umfang_drache, viereck: umfang_viereck)(viereck_typ)
#define get_flaeche(viereck_typ) _Generic(viereck_typ, quadrat: flaeche_quadrat, rechteck: flaeche_rechteck, drachenviereck:  flaeche_drache, viereck: flaeche_viereck)(viereck_typ)

// vererbung an dieser stelle mit unions oder kompositionen in abgeleiten strukturen nachzubilden macht hier kein sinn..
// formeln und variablen wie https://de.wikipedia.org/wiki/Viereck

// quadrat typ
typedef struct _quadrat{
	float a;
} quadrat;

// rechteck typ
typedef struct _rechteck{
	float a,b;
} rechteck;

// drachenviereck typ
typedef struct _drachenviereck{
	float a,b,e,f;
} drachenviereck;

// allgemeines viereck typ
typedef struct _viereck{
	float a,b,c,d,e,f;
} viereck;


// funktionen umfang
float umfang_quadrat(quadrat x){
	return 4*x.a;
}

float umfang_rechteck(rechteck x){
	return 2*(x.a+x.b);
}

float umfang_drache(drachenviereck x){
	return 2*(x.a+x.b);
}

float umfang_viereck(viereck x){
	return (x.a+x.b+x.c+x.d);
}

// funktionen fläche
float flaeche_quadrat(quadrat x){
	return sqr(x.a);
}

float flaeche_rechteck(rechteck x){
	return x.a*x.b;
}

float flaeche_drache(drachenviereck x){
	return 0.5*x.e*x.f;
}

float flaeche_viereck(viereck x){
	return 0.25*sqrt(4*sqr(x.e)*sqr(x.f)-sqr(sqr(x.b)+sqr(x.d)-sqr(x.a)-sqr(x.c)));
}


#endif /* SHAPES_H  */
