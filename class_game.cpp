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
        initializeBoard();
        setPlayerIcons();
        printBoard();
        cout << "Where do you want to place your symbol?" << endl;
        cin >> chosenColumn;
        placeSymbolInArray(chosenColumn, playerIndex);
        switchPlayer();
        exitGame();
    }

    void initializeBoard() 
{  //ser till att alla celler är tomma i början av nytt spel när man vill starta om spelet
    for (int row = 0; row < 8; ++row) { 
        for (int col = 0; col < 8; ++col) {
            gameBoard[row][col] = ' ';
        }
    }
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

    void printBoard()
    {
        for (int rows = 0; rows < 8; ++rows)
        {
            for(int cols = 0; cols < 8; ++cols)
            {
                cout << "| " << gameBoard[rows][cols] << " ";
            }
            cout << "|" << endl;
        }
        for (int col = 0; col < 8; ++col) {
            cout << "----";
        }
        cout << "-" << endl;
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

    //Funktion för att avsluta spelet.
    bool exitGame()
    {
        char answer;
        do
        {
            cout << "Vill du avsluta spelet? \nJa(j) Nej(n): ";
            cin >> answer;

            if (answer == 'j' || answer == 'J') 
            {
                return true;
            }
            else if (answer == 'n' || answer == 'N') 
            {
                return false; 
            }

            
            cout << "\nOgiltigt val. Försök igen.\n";

        } while (true);
    }

};