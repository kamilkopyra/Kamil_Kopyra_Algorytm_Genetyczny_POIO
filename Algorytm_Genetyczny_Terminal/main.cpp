#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>


#include "TParam.h"
#include "TCandidate.h"
#include "TPopulation.h"
#include "TKlasa.h"

using namespace std;

int main()
{
 //   TParam param1{ 1, 4, 1, 2 };
	//TParam param2{ 10, 20, 3};
	//TParam param3{ 0, 10, 0.5, 3.3};


	//cout << "param1 ";
	//param1.info();

	//cout << "param2 ";
	//param2.info();

	//cout << "param3 ";
	//param3.info();


	//param2.set_val(100);
	//param3.set_val(7.5);

	//cout << "=============================\n";
	//cout << "AFTER\n";
	//cout << "=============================\n";

	//cout << "param2 ";
	//param2.info();

	//cout << "param3 ";
	//param3.info();


	//return 0;



	
	//srand(time(0));

	//TPopulation pop(10);

	//cout << "Zaraz po utworzeniu obiektu klasy TPopulation\n";
	//pop.info();
	//cout << "\n\n";

	//cout << "Po wykonanych obliczeniach\n";
	//pop.calculate();
	//pop.info();
	//cout << "\n\n";


	//return 0;

	vector <TKlasa> obiekty;

	unsigned int count;
	cout << "Podaj liczbe obiektow do utworzenia: ";
	cin >> count;
	cout << "\n";

	for (int i = 0; i < count; i++) 
	{
		obiekty.push_back({ i });
	}

	for (int i = 0; i < count; i++) 
	{
		obiekty[i].info();
	}

	//TKlasa obiekt1{ -3 };
	//TKlasa obiekt2{0};
	//TKlasa obiekt3{ 5 };

	//obiekt1.info();
	//obiekt2.info();
	//obiekt3.info();

	//cout << "=============================\n\n";

	//obiekt1.set_vector_size(3);
	//obiekt3.set_init_val(2);

	//obiekt1.info();
	//obiekt2.info();
	//obiekt3.info();


	return 0;

}


	
