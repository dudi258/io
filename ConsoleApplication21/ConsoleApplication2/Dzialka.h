#ifndef DZIALKA_H
#define DZIALKA_H

class Dzialka {

public:
	int Nr_Dzialki;
	float Powierzchnia;
	float Metraz_Altany;

	Dzialka()
	{
	}


	Dzialka(int Nr_Dzialki, float Powierzchnia, float Metraz_Altany)
	{
		this->Nr_Dzialki = Nr_Dzialki;
		this->Powierzchnia = Powierzchnia;
		this->Metraz_Altany = Metraz_Altany;
	}

};

ostream& operator << (ostream& out, const Dzialka& obj)
{
	out << obj.Nr_Dzialki << " " << obj.Powierzchnia << " " << obj.Metraz_Altany;
	return out;
}

#endif
