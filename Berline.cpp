#include "chassis.h"





float get_aerodynamisme(bool berline_break, bool berline_4x4); //aerodynamisme d'une voiture berline
{
	if (berline_break=false && berline_4x4=false) //berline simple
	{
		return 0.03 * ((dimensions.longeur - dimensions.hauteur/2 + dimensions.longueur_de_toit)/2 * largeur * hauteur * (hauteur / 2) ^2);
	}
	else if (berline_break && berline_4x4 == false) //berline break
	{
		return 0.03 * (dimensions.longeur + dimensions.longueur_de_toit)/2 * largeur * hauteur;
	}
	else if (berline_break == false && berline_4x4) //berline 4x4
	{
		return 0.03 * longeur * largeur * hauteur;
	}	
}

Berline::Berline(bool berline_4x4, bool berline_break)
{
	if (berline_4x4 == true)
	{
	float Chassis::longueur = 4.6;
	float Chassis::largeur = 2.5;
	float Chassis::hauteur = 1.3;
	float Chassis::longueur_de_toit = 0 ;
	}
	else if (berline_break == true)
	{
	float Chassis::longueur = 4.6 ;
	float Chassis::largeur = 2.2 ;
	float Chassis::hauteur = 1.4 ;
	float Chassis::longueur_de_toit = 3.2;
	}
	else
	{
	float Chassis::longueur = 4.6 ;
	float Chassis::largeur = 2.2 ;
	float Chassis::hauteur = 1.4 ;
	float Chassis::longueur_de_toit = 2 ;
	}
}
