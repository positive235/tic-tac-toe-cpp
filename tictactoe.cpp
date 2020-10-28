/* 
* Tic-Tac-Toe
* Author: Hae-Ji Park (github.com/positive235)
* Date: Oct 28, 2020
*/

#include <iostream>
#include <vector>
#include "tictactoe.hpp"

int main() {

    // Draw initial board
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // Game started or not: if true, game started, otherwise, game ended.
    bool start = true;
    // Which player's turn is: if true, 'X' player, otherwise, 'O' player.
    bool player_turn = true;
    // Number of play. If it is 9, draw and game over.
    int num_play = 0;

    // Game introduction
    introduction();
    // Show initial board
    draw_board(board);
    
    while (start && num_play < 9) {
        // Until game over, notify the current and the next player,
        // update the board and the next turn, and show the board.

        player_turn = notify_turn(player_turn);
        player_turn = update_board_and_turn(start, board, player_turn);
        draw_board(board);
        num_play++;
    }
    
    if (num_play == 9) {
        // If number of play is 9, draw and game over.
        std::cout << "DRAW! GAME OVER.\n\n";
    }
}

