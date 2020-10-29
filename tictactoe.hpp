// Introduction to tictactoe game
void introduction();

// Which player turn is: If X player turn, true. Otherwise, false.
bool notify_turn(bool player_turn);

// Ask player where the player want to put, update the board and the next turn.
// If 'O' or 'X' already exist where the player want to put, ask again.
bool update_board_and_turn(bool start, char board[], bool player_turn);

// Draw current board
void draw_board(char board[]);

// If no winner, play next. Otherwise, notify the winner.
std::string win_or_next(char board[]);
