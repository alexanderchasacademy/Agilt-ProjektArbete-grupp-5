#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> board(8, vector<char>(8, ' '));

void printBoard() {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            cout << "| " << board[row][col] << " ";
        }
        cout << "|" << endl;
    }
    // Print the bottom border
    for (int col = 0; col < 8; ++col) {
        cout << "----";
    }
    cout << "-" << endl;
}

int main() {
    printBoard();
    return 0;
}
