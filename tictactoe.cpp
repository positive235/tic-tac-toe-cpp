/* 
* Tic-Tac-Toe
* Author: Hae-Ji Park (github.com/positive235)
* Date: Oct 28, 2020
*/

#include <iostream>
#include <vector>
#include "tictactoe.hpp"

int main() {
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool start = true;
    bool player_turn = true;
    int num_play = 0;
    introduction();
    draw_board(board);
    
    while (start && num_play < 9) {
        player_turn = notify_turn(player_turn);
        player_turn = play(start, board, player_turn);
        draw_board(board);
        num_play++;
    }
    if (num_play == 9) {
        std::cout << "DRAW! GAME OVER.\n\n";
    }
}

