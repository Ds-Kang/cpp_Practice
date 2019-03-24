#include <iostream>

using namespace std;

class Board {
public:
	Board(const int, const int);

	int get_size_x() const { return size_x; }
	int get_size_y() const { return size_y; }
	void print_board();
	void find_where(int*,int);
private:
	int size_x;
	int size_y;
	char** board;
};

Board::Board(const int size_x, const int size_y) : size_x(size_x), size_y(size_y) {
	board = new char*[size_x];
	for (int i = 0; i < size_x; i++) {
		board[i] = new char[size_y];
		for (int j = 0; j < size_y; j++) {
			board[i][j] = 'бр';
		}
	}
}

void Board::find_where(int* line,int axis) {
	int size;
	if (axis == 0) size = size_x;
	else size = size_y;
	// for first
	for (int i = 0; i < size; i++) {
		int forward = 0, backward = 0;
		for (int j = 0; j < i; j++) {
			forward += line[j] + 1;
		}
		for (int j = i+1; j < size; j++) {
			backward += line[j] + 1;
		}
		for (int j = backward - line [i]; j < forward + line[i]; j++) {
			if(axis==0)	board[j][i] = 'бс';
			else board[j][i] = 'бс';
		}
	}

	
}

void Board::print_board() {
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < size_y; j++) {
			printf("%c",board[i][j]);
		}
		printf("\n");
	}
}




int main() {
	int size_x = 15, size_y = 15;
	Board board(size_x, size_y);
	board.print_board();



	return 0;
}