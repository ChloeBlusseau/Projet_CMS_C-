#ifndef _CHASSIS_H
#define _CHASSIS_H





class Chassis
{
	protected :
		int nombre_portes; 
		int cylindree;
		bool luxe;

		float longueur;
		float largeur;
		float hauteur;
		float longueur_de_toit;
	public :
		float get_longeur();
		float get_largeur();
		float get_hauteur();
		float get_largeur_de_toit();
		void modify_longeur(float);
		void modify_largeur(float);
		void modify_hauteur(float);
		void modify_largeur_de_toit(float);
}


class Berline : public Chassis
{
	protected :
		bool berline_break;
		bool berline_4x4;
	public :
		float get_aerodynamisme(bool berline_break, bool berline_4x4);
}
Berline::Berline();

class Coupee : public Chassis
{
	
	public :
		float get_aerodynamisme();
}
Coupee::Coupee();


class dimensions
{
	
}

#endif

