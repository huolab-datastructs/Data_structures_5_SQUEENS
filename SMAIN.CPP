#include "SQUEENS.H"
 
void main()
{
   int board_size;
   print_information();
   cout << "What is the size of the board? " << flush;
   cin >> board_size;
   if (board_size < 0 || board_size > max_board)
      cout << "The number must be between 0 and " << max_board << endl;
   else {
      Queens configuration(board_size); //   Initialize an empty configuration.
      solve_from(configuration); //  Find all solutions extending configuration.
   }
}
