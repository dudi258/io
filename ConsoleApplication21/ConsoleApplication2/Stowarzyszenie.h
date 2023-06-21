#ifndef STOWARZYSZENIE_H
#define STOWARZYSZENIE_H

class Stowarzyszenie {

public:
	float Stan_Konta;

	Stowarzyszenie(float Stan_Konta)
	{
		this->Stan_Konta = Stan_Konta;
	}
};

ostream& operator << (ostream& out, const Stowarzyszenie& obj)
{
	out <<"Stan Konta Stowarzyszenia: " << obj.Stan_Konta<<"zl";
	return out;
}

#endif
