#include <iostream>

using namespace std;

class Game
{
public:
    char currentPlayer = NULL;
    char playerIcons[3] = {'x', 'y', 'z'};
    char gameBoard[8][8];
    const int winCon = 4;
    
    //method för att byta aktiva spelare
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
        else;
    }

    void runGame()
    {
    }
};