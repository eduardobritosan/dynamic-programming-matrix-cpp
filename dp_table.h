/*
 * dp_table.h
 *
 *  Created on: Mar 23, 2015
 *      Author: eebritos
 */
#include <string>

#ifndef DP_TABLE_H_
#define DP_TABLE_H_


struct matrix
{
	int rows_;
	int columns_;
	std::string name_;
};

class dp_table
{
private:
	long* table_;
public:
	dp_table();
	dp_table(int rows, int columns);
	long get_element(int i, int j);
	void set_element(int i, int j, long new_value);
	std::string get_parentized_operation();
private:
	int pos(int i, int j);
};



#endif /* DP_TABLE_H_ */
