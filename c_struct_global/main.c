#include <stdio.h>
#include "shapes.h"

int main(int argc, char **argv)
{
	// {a}
	quadrat q1 = {1.5};
	
	// {a,b}
	rechteck r1 = {1.5,2.5};
	
	// {a,b,e,f}
	drachenviereck d1 = {1.5,2.5,3.5,2.};

	// {a,b,c,d,e,f}
	viereck v1 = {1.5,2.5,2.,3.,3.5,4.5};

	printf("quadrat umfang: %.2f\n",get_umfang(q1));
	printf("rechteck umfang: %.2f\n",get_umfang(r1));
	printf("drachenviereck umfang: %.2f\n",get_umfang(d1));
	printf("viereck umfang: %.2f\n",get_umfang(v1));

	printf("quadrat inhalt: %.2f\n",get_flaeche(q1));
	printf("rechteck inhalt: %.2f\n",get_flaeche(r1));
	printf("drachenviereck inhalt: %.2f\n",get_flaeche(d1));
	printf("viereck inhalt: %.2f\n",get_flaeche(v1));

	return 0;
}
