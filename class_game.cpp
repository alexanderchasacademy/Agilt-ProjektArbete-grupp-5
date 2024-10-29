#include <iostream>

using namespace std;

class Game
{
public:
    //initial player icons
    char playerIcons[3] = {'x', 'y', 'z'};
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
    char gameBoard[8][8];
    const int winCon = 4;

    void runGame()
    {
    }
};