#include <iostream>

using namespace std;

class Game
{
public:
    char playerIcons[3] = {'x', 'y', 'z'};
    char gameBoard[8][8] = {{' '}};
    const int winCon = 4;

    void runGame()
    {
        int chosenColumn;
        int playerIndex = 0;
        cout << "Where do you want to place your symbol?" << endl;
        cin >> chosenColumn;
        placeSymbolInArray(chosenColumn, playerIndex);
    }

    void placeSymbolInArray(int chosenColumn, int playerIndex)
    {
        for (int row = 7; row >= 0; --row)
        {
            if (gameBoard[row][chosenColumn] == ' ')
            {
                gameBoard[row][chosenColumn] = playerIcons[playerIndex];
                break;
            }
        }
    }
};