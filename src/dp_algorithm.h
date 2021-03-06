/*
 * dp_algorithm.h
 *
 *  Created on: Mar 23, 2015
 *      Author: eebritos
 */

#ifndef DP_ALGORITHM_H_
#define DP_ALGORITHM_H_

#include "dp_table.h"

struct matrix
{
	int rows_;
	int columns_;
	std::string name_;
};

class dp_algorithm
{
private:
	dp_table* table_;
	matrix* matrix_array;
public:
	dp_algorithm(int i, int j, matrix* new_array);
	dp_algorithm();
	long diagonal_run();
	long row_run();
	long column_run();
	std::string get_parentized_operation();
};
#endif /* DP_ALGORITHM_H_ */
