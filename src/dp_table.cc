/*
 * dp_table.cc
 *
 *  Created on: Mar 23, 2015
 *      Author: eebritos
 */

dp_table::dp_table()
{
	initialize(TAMANYO_BASE,TAMANYO_BASE);
}

dp_table::dp_table(int rows, int columns)
{
	initialize(rows, columns);
}

int dp_table::pos(int i, int j)
{
	return (i-1)*get_rows()+j-1;
}

long dp_table::get_element(int i, int j)
{
	return table_[pos(i,j)];
}

void dp_table::set_element(int i, int j, long new_value)
{
	table_[pos(i,j)] = new_value;
}

void dp_table::print_table()
{
	std::cout << "Impresion de la matriz:" << std::endl;
	for(int i = 0; i < get_rows(); ++i)
	{
		for(int j = 0; j < get_columns(); ++j)
		{
			std::cout << get_element(i,j) << " ";
		}
		std::cout << std::endl;
	}
}

int dp_table::get_rows()
{
	return rows_;
}

int dp_table::get_columns()
{
	return columns_;
}

void dp_table::set_rows(int new_rows)
{
	rows_ = new_rows;
}

void dp_table::set_columns(int new_columns)
{
	columns_ = new_columns;
}

void dp_table::reset(int i, int j)
{
	delete [] table_;
	initialize(i,j);
}

void dp_table::initialize(int rows, int columns)
{
	set_rows(rows);
	set_columns(columns);
	table_ = new long[rows*columns];
	for(int i = 0; i < rows*columns; ++i)
	{
		table_[i] = VALOR_BASE;
	}
}






