#include <iostream>
#include <vector>
#include <string>
#include <set>
 
using namespace std;


/*
 * Function: print_sudoku(v0, v1, v2, v3, v4, v5, v6, v7, v8)
 * Description: this function takes in nine vectors, each of
 * size 9. It then graphically prints out the sudoku in a
 * graphically appealing format.
 */
int printSudoku(vector<vector<int> > board) {
	string s;

	for (int i = 0; i < board.size(); i++) {
		//Rows
		if (i % 3 == 0) {
			cout << "+---+---+---+---+---+---+---+---+---+" << endl;
		}
		cout << "| ";
		for (int j = 0; j < board[i].size(); j++) {
			//Columns

			//Set blank values
			if (board[i][j] == -1) {
				s = "-";
			}
			else {
				s = std::to_string(board[i][j]);

			}
			if ((j+1) % 3 == 0) {
				cout << s << " |" << ' ';
			}
			else {
				cout << s << "  " << ' ';
			}

		}
		cout << endl;

	}
	cout << "+---+---+---+---+---+---+---+---+---+" << endl;

	return 0;
}

bool checkSudoku(vector<vector<int> > board){


	//Check each row for duplicates
	for (auto row : board) {
		
		set<int> rowset;
		
		for (int i = 0; i < 9; i++) {
			if (rowset.find(row[i]) != rowset.end()) {
				//We have a duplicate!
				cout << "Row Duplicate Found" << endl;
				return false;
			}
			if (row[i] != -1) rowset.insert(row[i]);
		}
	}

	//Now check each column for duplicates
	for (int col = 0; col < 9; col++) {

		set<int> colset;

		for (auto row : board) {

			if (colset.find(row[col]) != colset.end()) {
				cout << "Column Duplicate Found" << endl;
				return false;

			}
			if (row[col] != -1) colset.insert(row[col]);
		}


	}

	//TODO - check boxes.

	return true;

}

/*
 * Function: updateBoard(vector<vector<int> >& board, int row, int col, int val)
 * 
 * Description: updates the game board, so that (row, col) of board is
 * set equal to the value val.
 *
 */
int updateBoard(vector<vector<int> >& board, int row, int col, int val) {
	
	board[row-1][col-1] = val;
	
	return 0;

}

int main()
{
	//Generate the board
	vector<int> v;
	for(int i = 0; i < 9; i++){
		v.push_back(-1);

	}

	vector<vector<int> > board(9, v);

	updateBoard(board, 5, 3, 3);
	updateBoard(board, 7, 3, 3);

	updateBoard(board, 1, 1, 1);
	updateBoard(board, 1, 5, 1);


	printSudoku(board);
	cout << checkSudoku(board) << endl;



}