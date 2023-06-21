#include <iostream>
#include "Potencjalny_Dzialkowiec.h"
#include "Dzialka.h"
#include "Dzialkowiec.h"
#include "Odczyty.h"
#include "Faktura.h"
#include "Stowarzyszenie.h"
#include <string>
#include <vector>
using namespace std;
int main()
{
	Potencjalny_Dzialkowiec P_D(1, "Tom", "Jones","Klonowica", "tomcio@wp.pl", "111111111");
	Dzialka Dz1(1,20,5);
	Dzialka Dz2(2,5,20);
	Dzialkowiec Dzalkow(P_D);
	Dzalkow.dodaj_dzialke(Dz1);
	Dzalkow.dodaj_dzialke(Dz2);
	Odczyty Od(1, 10.15, 21.37);
	Faktura fk(1, Od);
	Stowarzyszenie St(1000.15);

	cout <<"Potencjalny Dzialkowiec" << P_D << endl;
	cout <<"Dzialka: " << Dz1 << endl;
	cout << Dzalkow << endl;
	cout << Od << endl;
	cout << St << endl;
	cout << fk << endl;
	cout << "" << endl;
	Dzalkow.Sprawdz_Wlasne();



	

}
