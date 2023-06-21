#ifndef FAKTURA_H
#define FAKTURA_H
#include "Odczyty.h"
#include <string>
using namespace std;
class Faktura {

public:
	int ID_Faktura;
	string Data_Faktura;
	float Woda;
	float Prad;
	float Oplata_Stala = 14;
	Faktura(int id, Odczyty od)
	{
		this->Woda = od.Pomiar_Wody;
		this->Prad = od.Pomiar_Pradu;
		this->ID_Faktura = id;
	}
	
};
ostream& operator << (ostream& out, const Faktura& obj)
{
	out << "Faktura: " << obj.ID_Faktura << " Pomiar Pradu:" << obj.Prad << " Pomiar Wody: " << obj.Woda << " op³ata za prad " << obj.Prad*3.14 << " oplata za wode: " << obj.Woda*4.44<<"oplata stala:"<<obj.Oplata_Stala<<"podsumowanie"<< (obj.Woda * 4.44)+ (obj.Prad * 3.14)+obj.Oplata_Stala;

	return out;

}

#endif
