#include <iostream>
#include <vector>

using namespace std;


class Game
{
public:
    char playerIcons[3] = {'x', 'y', 'z'};
    char gameBoard[8][8];
    const int winCon = 4;
    vector<vector<char>> board;
    Game() : board(8, vector<char>(8, ' ')) {}
    void printBoard() {
        for (int row = 0; row < 8; ++row) {
            for (int col = 0; col < 8; ++col) {
                cout << "| " << board[row][col] << " ";
            }
            cout << "|" << endl;
        }
        
        for (int col = 0; col < 8; ++col) {
            cout << "----";
        }
        cout << "-" << endl;
    }
    void runGame()
    {
        printBoard();
    }
};