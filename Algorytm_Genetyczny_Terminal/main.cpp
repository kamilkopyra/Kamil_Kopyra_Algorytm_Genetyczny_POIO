#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>


#include "TParam.h"
#include "TCandidate.h"
#include "TPopulation.h"
#include "TKlasa.h"
#include "TAlgorithm.h"

using namespace std;

//int main()
//{
//	srand(time(0));
//
//	unsigned int candidates_count = 5;
//	unsigned int max_population_count = 20;
//	unsigned int min_improvement_proc = 2;
//
//	TAlgorithm task{candidates_count,
//		max_population_count,
//		min_improvement_proc};
//	task.run();
//
//
//	return 0;
//
//}

int main()
{
	srand(time(0));


	TParam gen{ "gen1", 0, 10, 0.1 };
	gen.info();

	cout << "\n\n\n";


	TCandidate os1{};
	os1.rate();
	os1.info();

	TCandidate os_copy{ os1 }; // konstruktor kopiujący
	os_copy.info();

	return 0;
}


	
