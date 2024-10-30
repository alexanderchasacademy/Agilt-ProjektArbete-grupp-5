#include <iostream>
#include <vector>
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
    vector<vector<char>>board;
    Game() : currentPlayer(' '), board(8, vector<char>(8, ' ')){}
    
    void runGame()
    {
        initializeBoard();
        int chosenColumn;
        int playerIndex = 0;
        setPlayerIcons();
        cout << "Where do you want to place your symbol?" << endl;
        cin >> chosenColumn;
        placeSymbolInArray(chosenColumn, playerIndex);
        switchPlayer();
        exitGame();
    }

    void initializeBoard() 
    {  //ser till att alla celler är tomma i början av nytt spel när man vill starta om spelet
      for (int row = 0; row < 8; ++row) 
      { 
          for (int col = 0; col < 8; ++col) 
          {
              board[row][col] = ' ';
          }
      }
    }
    // method för att byta aktiva spelare
    void switchPlayer()
    {
        if (currentPlayer == playerIcons[0])
        {
            currentPlayer == playerIcons[1];
            cout << "Spelare 1s tur\n";
        }
        else if (currentPlayer == playerIcons[1])
        {
            currentPlayer == playerIcons[2];
            cout << "Spelare 2s tur\n";
        }
        else if (currentPlayer == playerIcons[2])
        {
            currentPlayer == playerIcons[0];
            cout << "Spelare 3s tur\n";
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