#include "../../C/UTILITY.H" 
const int max_board = 30;

class Queens {
public:
   Queens(int size);
   bool is_solved() const;
   void print() const;
   bool unguarded(int col) const;
   void insert(int col);
   void remove(int col);
   int  board_size; //   dimension of board = maximum number of queens
private:
   int  count;      //   current number of queens = first unoccupied row
   bool queen_square[max_board][max_board];
};

void print_information();
void solve_from(Queens &configuration);