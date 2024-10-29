#include <iostream>

using namespace std;

class Game
{
public:
    char currentPlayer = ' ';
    // initial player icons
    char playerIcons[3] = {'x', 'y', 'z'};
    // array containing the gameboard
    char gameBoard[8][8];
    const int winCon = 4;

    void runGame()
    {
        int chosenColumn;
        int playerIndex = 0;
        setPlayerIcons();
        cout << "Where do you want to place your symbol?" << endl;
        cin >> chosenColumn;
        placeSymbolInArray(chosenColumn, playerIndex);
        switchPlayer();
    }

    // method för att byta aktiva spelare
    void switchPlayer()
    {
        if (currentPlayer == playerIcons[0])
        {
            currentPlayer == playerIcons[1];
        }
        else if (currentPlayer == playerIcons[1])
        {
            currentPlayer == playerIcons[2];
        }
        else if (currentPlayer == playerIcons[2])
        {
            currentPlayer == playerIcons[0];
        }
        else
            ;
    }

    void setPlayerIcons()
    {
        // lets the player decide symbols.
        int symbolChoice = 0;
        cout << "tryck 1 om du vill bestämma dina egna symboler, annars tilldelas spelarna standard symboler(x, y, z)\n";
        cin >> symbolChoice;

        // Change each symbol of the players choice.
        if (symbolChoice == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "Välj symbol för spelare " << i + 1 << ": ";
                cin >> playerIcons[i];
            }
        }
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