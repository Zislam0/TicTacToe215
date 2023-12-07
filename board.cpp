#include "../inc/board.hpp"
TicTacToe::TicTacToe() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            this->board[i][j] = ' ';
        }
    }
}
void TicTacToe::to_string() {
    // ...
}

