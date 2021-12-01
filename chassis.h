#ifndef _CHASSIS_H
#define _CHASSIS_H

class Chassis
{
	protected :
		int prix_chassis = 0;
		int nombre_portes; 
		int cx;
		bool luxe;

		float longueur;
		float largeur;
		float hauteur;
		float longueur_de_toit;
	public :
		
		void set_luxe(bool choix_luxe);
		void set_nombre_portes(int portes_demandee);
		void set_nombre_portes();
		float get_longeur();
		float get_largeur();
		float get_hauteur();
		float get_longueur_de_toit();
		void modify_longeur(float);
		void modify_largeur(float);
		void modify_hauteur(float);
		void modify_longueur_de_toit(float);
		virtual int calcul_prix(int somme_ajoutee)=0;
		virtual float get_aerodynamisme()=0;
};

class Berline : public Chassis
{
	public :
		Berline();
		float get_aerodynamisme();
		
};


class Coupee : public Chassis
{
	
	public :
		Coupee();
		float get_aerodynamisme();
};




class TypeBreak : public Berline
{
	public :
		TypeBreak();
		float get_aerodynamisme();
};



class Type4x4 : public Berline
{
	public :
		Type4x4();
		float get_aerodynamisme();
};


#endif

