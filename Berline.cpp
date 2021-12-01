#include "chassis.h"
#include <math.h>




float Berline::get_aerodynamisme();
{
/*aerodynamisme d'une voiture berline standard (ni break ni 4x4)*/
	return cx;
}

Berline::Berline()
{
	longueur = 4.6 ;
	largeur = 2.2 ;
	hauteur = 1.4 ;
	longueur_de_toit = 2.0 ;
	cx = 0.03 * ((longueur - hauteur/(2.0) + longueur_de_toit)/(2.0) * largeur * hauteur * pow(hauteur / 2,2));
}
