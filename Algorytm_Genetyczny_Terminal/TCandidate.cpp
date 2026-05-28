#include "TCandidate.h"
#include <math.h> // pow
#include <iostream>

using namespace std;

TCandidate::TCandidate()
{
	mark = 0;
	rand_gens_val();
}


//konstruktor kopiujący
TCandidate::TCandidate(const TCandidate& oryginal)
	: genotype{ oryginal.genotype[0], oryginal.genotype[1] }, mark{ oryginal.mark }
{
	cout << "Skopiowano oryginał kandydata\n";
}

//konstruktor delegujący
TCandidate::TCandidate(double fixed_mark) : TCandidate()
{
	mark = fixed_mark;
}


void TCandidate::rate()
{
	double x1 = genotype[0].get_val();
	double x2 = genotype[1].get_val();

	mark = pow(x1, 2) + x2;
}

void TCandidate::rand_gens_val()
{
	for (int i = 0; i < GENS_COUNT; i++)
	{
		genotype[i].set_rand_val();
	}
}

void TCandidate::info()
{
	cout << "\n\n";
	cout << "==============================\n";
	cout << "==\n";
	cout << "== gens count: " << GENS_COUNT << "\n";

	for (int i = 0; i < GENS_COUNT; i++) 
	{
		cout << "== " << genotype[i].get_name()
			<< "\" value: " << genotype[i].get_val()
			<< "\n";
	}

	cout << "==\n";
	cout << "== rate: " << mark << "\n";
	cout << "==============================\n\n";
}



