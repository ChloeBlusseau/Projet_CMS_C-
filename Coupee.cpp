#include "chassis.h"
#include "dimensions.h"



float get_aerodynamisme(); //aerodynamisme d'une voiture coupee 
{
	return 0.03 * dimensions.longueur * dimensions.largeur * dimensions.hauteur ;	
}

void Coupee::Coupee(int nombre_portes, int cylindree, bool luxe)
{
	int Chassis::nombre_portes = nombre_portes;
	int Chassis::cylindree = cylindree;
	bool Chassis::luxe = luxe;
	float Chassis::longueur = 4.6;
	float Chassis::largeur = 2.2;
	float Chassis::hauteur = 1.3;
	float Chassis::longueur_de_toit = 0 ;
}
