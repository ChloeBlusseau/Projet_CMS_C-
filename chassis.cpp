#include "chassis.h"
#include <iostream>

void Chassis::set_luxe(bool choix_luxe)
{
	if (choix_luxe == true)
	{
		luxe = true;
		prix_chassis = prix_chassis + 1500;
	}
	else 
	{
		luxe = false;
	}
	
}

void Chassis::set_nombre_portes(int portes_demandees)
{
	nombre_portes = portes_demandees;
}

float Chassis::get_longeur()
{
	return longueur;
}

float Chassis::get_largeur()
{
	return largeur;
}
		
float Chassis::get_hauteur()
{
	return hauteur;
}
		
float Chassis::get_longueur_de_toit()
{
	return longueur_de_toit;
}

void Chassis::modify_longeur(float nouvelle_longueur)
{
	longueur = nouvelle_longueur;
}
		
void Chassis::modify_largeur(float nouvelle_largeur)
{
	largeur = nouvelle_largeur;
}

void Chassis::modify_hauteur(float nouvelle_hauteur)
{
	hauteur = nouvelle_hauteur;
}

void Chassis::modify_longueur_de_toit(float nouvelle_ldetoit)
{
	longueur_de_toit = nouvelle_ldetoit;
}

		
