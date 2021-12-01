#include "chassis.h"



float Coupee::get_aerodynamisme() //aerodynamisme d'une voiture coupee 
{
	return cx;
}

void Coupee::Coupee()
{
	nombre_portes = nbportes;
	cx = coeffaero;
	luxe = option_luxe;
	longueur = 4.6;
	largeur = 2.2;
	hauteur = 1.3;
	longueur_de_toit = 0 ;
	prix_chassis += 2000;
	cx = 0.03 * longueur * largeur * hauteur ;
}


