#ifndef ODCZYTY_H
#define ODCZYTY_H

class Odczyty {

public:
	int ID;
	float Pomiar_Wody;
	float Pomiar_Pradu;	
	
	Odczyty(int ID, float Pomiar_Wody, float Pomiar_Pradu)
	{
		this->ID = ID;
		this->Pomiar_Pradu = Pomiar_Pradu;
		this->Pomiar_Wody = Pomiar_Wody;
	}


private:
	__wchar_t Data_Pomiaru;
};

ostream& operator << (ostream& out, const Odczyty& obj)
{
	out <<"Odczyt: " << obj.ID << " Pomiar Pradu:" << obj.Pomiar_Pradu << " Pomiar Wody: " << obj.Pomiar_Wody;

	return out;

}


#endif
