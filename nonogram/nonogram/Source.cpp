#include <iostream>

class Board {
public:
	Board(const int, const int);

	int get_size_x() const { return size_x; }
	int get_size_y() const { return size_y; }
	void print_board();


private:
	int size_x;
	int size_y;
	char** board;
};

Board::Board(const int size_x, const int size_y) : size_x(size_x), size_y(size_y) {
	board = new char*[size_x];
	for (int i = 0; i < size_x; i++) {
		board[i] = new char[size_y];
	}
}
void Board::print_board() {
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < size_y; j++) {
			printf("бс");
		}
		printf("\n");
	}
}


int main() {

	return 0;
}