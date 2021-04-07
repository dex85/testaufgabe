#include <stdio.h>
#include "shapes_pointer.h"

int main(int argc, char **argv)
{
	// {a}
	quadrat q1 = {1.5, &umfang_quadrat, &flaeche_quadrat};
	
	// {a,b}
	rechteck r1 = {1.5,2.5, &umfang_rechteck, &flaeche_rechteck};
	
	// {a,b,e,f}
	drachenviereck d1 = {1.5,2.5,3.5,2., &umfang_drache, &flaeche_drache};

	// {a,b,c,d,e,f}
	viereck v1 = {1.5,2.5,2.,3.,3.5,4.5, &umfang_viereck, &flaeche_viereck};
	
	printf("quadrat umfang: %.2f\n",q1.get_umfang(&q1));
	printf("quadrat inhalt: %.2f\n",q1.get_flaeche(&q1));

	printf("rechteck umfang: %.2f\n",r1.get_umfang(&r1));
	printf("rechteck inhalt: %.2f\n",r1.get_flaeche(&r1));

	printf("drachenviereck umfang: %.2f\n",d1.get_umfang(&d1));
	printf("drachenviereck inhalt: %.2f\n",d1.get_flaeche(&d1));

	printf("viereck umfang: %.2f\n",v1.get_umfang(&v1));
	printf("viereck inhalt: %.2f\n",v1.get_flaeche(&v1));

	return 0;
}
