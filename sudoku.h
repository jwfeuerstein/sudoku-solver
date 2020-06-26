#ifndef Sudoku_H
#define Sudoku_H

class Sudoku {

public:
	Sudoku(int puzzle[9][9]);
	~Sudoku();

	void solve(); 
	void print(); 
	void verify(); 

private:
	bool isValid(int row, int col);
	bool solveHelper(int row, int col);
	int board[9][9];

};

#endif
