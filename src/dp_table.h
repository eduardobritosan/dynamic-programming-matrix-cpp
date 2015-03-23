/*
 * dp_table.h
 *
 *  Created on: Mar 23, 2015
 *      Author: eebritos
 */
#include <string>
#include <iostream>

#ifndef DP_TABLE_H_
#define DP_TABLE_H_

const int TAMANYO_BASE = 2;
const int VALOR_BASE = 0;

class dp_table
{
private:
	long* table_;
	int rows_;
	int columns_;

public:
	dp_table();
	dp_table(int rows, int columns);
	long get_element(int i, int j);
	void set_element(int i, int j, long new_value);
	void print_table();
	void reset();
	int get_rows();
	int get_columns();
	void set_rows(int new_rows);
	void set_columns(int new_columns);
	void reset(int i, int j);
	void initialize(int rows, int columns);
private:
	int pos(int i, int j);
};

#endif /* DP_TABLE_H_ */
