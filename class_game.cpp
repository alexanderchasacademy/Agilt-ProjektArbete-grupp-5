#include <iostream>
#include <vector>

using namespace std;


class Game
{
public:
    char currentPlayer = ' ';
    char gameBoard[8][8];
    const int winCon = 4;
    //initial player icons
    char playerIcons[3] = {'x', 'y', 'z'};
     vector<vector<char>> board;
    Game() : board(8, vector<char>(8, ' ')) {} 
    void setPlayerIcons()
    {
        //lets the player decide symbols.
        int symbolChoice = 0;
        cout << "tryck 1 om du vill bestämma dina egna symboler, annars tilldelas spelarna standard symboler(x, y, z)\n";
        cin >> symbolChoice;

        //Change each symbol of the players choice.
        if (symbolChoice == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "Välj symbol för spelare " << i + 1 << ": ";
                cin >> playerIcons[i]; 
            }
        }
    }
    //array containing the gameboard
    

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
        setPlayerIcons();
        printBoard();
    }
};