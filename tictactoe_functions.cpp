#include <iostream>
#include <vector>

void introduction() {
    // Introduction to tictactoe game
    // ASC|| ART from "Text to ASC|| Generator(http://patorjk.com/software/taag/#p=display&f=Modular&t=tic%20tac%20toe)"
    // Game introduction from codecademy(https://www.codecademy.com/courses/learn-c-plus-plus/projects/cpp-tic-tac-toe)

    std::cout << " _______  ___   _______    _______  _______  _______    _______  _______  _______ \n";
    std::cout << "|       ||   | |       |  |       ||   _   ||       |  |       ||       ||       |\n";
    std::cout << "|_     _||   | |       |  |_     _||  |_|  ||       |  |_     _||   _   ||    ___|\n";
    std::cout << "  |   |  |   | |       |    |   |  |       ||       |    |   |  |  | |  ||   |___ \n";
    std::cout << "  |   |  |   | |      _|    |   |  |       ||      _|    |   |  |  |_|  ||    ___|\n";
    std::cout << "  |   |  |   | |     |_     |   |  |   _   ||     |_     |   |  |       ||   |___ \n";
    std::cout << "  |___|  |___| |_______|    |___|  |__| |__||_______|    |___|  |_______||_______|\n\n";
    std::cout << "Tic-Tac-Toe is a paper-and-pencil game for two players,\n";
    std::cout << "X and O, who take turns marking the spaces in a 3x3 grid.\n";
    std::cout << "The player who succeeds in placing three of their marks\n";
    std::cout << "in a horizontal, vertical or diagonal row wins the game.\n\n";
}

bool notify_turn(bool player_turn) {
    // Which player turn is: If X player turn, the value is true. 
    // If O player turn, the value is false.

    std::cout << "Current Player: ";
    if (player_turn) {
        std::cout << "X\n";
        std::cout << "Next Player: O\n\n";
    } else {
        std::cout << "O\n";
        std::cout << "Next Player: X\n\n";
    }
    return player_turn;
}

bool update_board_and_turn(bool start, char board[], bool player_turn) {
    // Ask player where the player want to put, and update the board and the next turn.

    int where_to_put;
    if (start) {
        std::cout << "Where do you want to put?(answer example: 3): ";
        std::cin >> where_to_put;
        where_to_put--;
        if (player_turn) {
            board[where_to_put] = 'X';
            player_turn = false;
        } else {
            board[where_to_put] = 'O';
            player_turn = true;
        }
    }
    return player_turn;
}

void draw_board(char board[]) {
    // Draw current board
    // from codecademy (https://www.codecademy.com/courses/learn-c-plus-plus/projects/cpp-tic-tac-toe)

    std::cout << "     |     |     \n";
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << '\n';
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << '\n';
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << '\n';
    std::cout << "     |     |     \n\n";

}
