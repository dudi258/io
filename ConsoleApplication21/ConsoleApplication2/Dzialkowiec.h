#ifndef DZIALKOWIEC_H
#define DZIALKOWIEC_H
#include <vector>
#include "Dzialka.h"
#include "Potencjalny_Dzialkowiec.h"
using namespace std;
class Dzialkowiec : Potencjalny_Dzialkowiec {
public:

	Potencjalny_Dzialkowiec P_D;
	vector <Dzialka> Dz;

	Dzialkowiec(Potencjalny_Dzialkowiec P_D)
	{
		this->P_D = P_D;
		
	}

	void dodaj_dzialke(Dzialka DD)
	{
		Dz.push_back(DD);
	};

	void Sprawdz_Wlasne()
	{
		cout << "Dzialki "<<P_D << endl;
		for (auto i : Dz)
		{
			cout << i << endl;
		}

	}

};

ostream& operator << (ostream& out, const Dzialkowiec obj)
{
	out << obj.P_D.Imie << " " << obj.P_D.Nazwisko << endl;

	return out;

}

#endif
