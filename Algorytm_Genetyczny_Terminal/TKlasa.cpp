#include "TKlasa.h"
#include <iostream>

using std::cout;
using std::endl;

unsigned int TKlasa::count = 0;
unsigned int TKlasa::vector_size = 5;

// wnioski: 
// statyczne pola klasy są współdzielone
// przez wszystkie obiekty tej klasy, 
// a nie są unikalne dla każdego obiektu


TKlasa::TKlasa(int init_val)
{
	TKlasa::count += 1;
	_id = TKlasa::count;
	// _id = this ->count;

	this->init_val = init_val;
}

void TKlasa::set_vector_size(unsigned int size)
{
	vector_size = size;
	// TKlasa::vector_size = size;
}

void TKlasa::set_init_val(int init_val)
{
	this->init_val = init_val;
}

void TKlasa::info()
{
	cout << "Obiekt klasy TKlasa o numerze: " << _id << "/" << this->count << endl;
	cout << "Wartosci: ";

	for (int i = 0; i < vector_size; i++)
	{
		cout << init_val + i << ", ";
	}

	cout << "\n\n";
}

TKlasa::~TKlasa()
{
	cout << "Usunięto obiekt klasy TKlasa o numerze: " << _id << "   ||      ";


	TKlasa::count -= 1;
	cout << "Pozostaly  " << TKlasa::count << " obiekty klasy TKlasa\n\n";



}

