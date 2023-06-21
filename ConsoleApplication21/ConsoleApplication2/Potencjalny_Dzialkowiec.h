#ifndef POTENCJALNY_DZIALKOWIEC_H
#define POTENCJALNY_DZIALKOWIEC_H
#include <string>
using namespace std;
class Potencjalny_Dzialkowiec {

public:
	int ID;
	string Imie;
	string Nazwisko;
	string Adres_Zamieszkania;
	string Adres_Mailowy;
	string Nr_Telefonu;

	Potencjalny_Dzialkowiec()
	{}

	Potencjalny_Dzialkowiec(const int ID, string Imie, string Nazwisko, string Adres_Zamieszkania,string Adres_Mailowy,string Nr_Telefonu)
	{
		this->ID = ID;
		this->Imie = Imie;
		this->Nazwisko = Nazwisko;
		this->Adres_Zamieszkania = Adres_Zamieszkania;
		this->Adres_Mailowy = Adres_Mailowy;
		this->Nr_Telefonu = Nr_Telefonu;
		// : ID(ID),Imie(Imie),Nazwisko(Nazwisko),Adres_Zamieszkania(Adres_Zamieszkania), Adres_Mailowy(Adres_Mailowy),Nr_Telefonu(Nr_Telefonu)
	}
	void Odczytaj_Komunikat()
	{
		cout << "Komunikat Odczytany" << endl;
	}

private:
	__wchar_t Kod_Pocztowy;



};

ostream& operator << (ostream& out, const Potencjalny_Dzialkowiec& obj)
{
	out <<obj.ID << " " << obj.Imie << " " << obj.Nazwisko;

	return out;

}


#endif
