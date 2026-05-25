#pragma once

#include "TCandidate.h"
#include <vector>


class TPopulation
{
	unsigned int candidated_count;
	std::vector <TCandidate> candidates;
	double best_val = 0;
	static unsigned int _id;

public:
	TPopulation(unsigned int cands_count = 10);
	void calculate();
	TCandidate get_best_candidate();

	void info();

	void best_info();

	unsigned int get_id() { return _id; }
	unsigned int get_candidates_count() { return candidated_count; }
	unsigned int get_best_val() { return best_val; }

};

