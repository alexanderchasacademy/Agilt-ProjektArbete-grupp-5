#include <iostream>
using namespace std;

class Game
{
public:
    // initial player icons
    char playerIcons[3] = {'x', 'y', 'z'};
    // array containing the gameboard
    char gameBoard[8][8];
    const int winCon = 4;
    bool winner = false, boardFull = false;
    int chosenColumn;
    int playerIndex = 0;

    void gameMenu()
    {
        int mChoice;
        bool mCheck=true;
        cout << "Vällkommen till Fyra i Rad, välj ett av alternativen nedan (1-3)\n";
        do
        {
            cout << "[1] Starta Spel\n"
                    "[2] Visa Spel Regler\n"
                    "[3] Avsluta Spel\n";
            cout << "input: ";
            cin >> mChoice;
            
            switch (mChoice)
            {
            case 1:
            
                runGame();
                break;
            
            case 2:
            
                if (gameRules()==false)
                {
                 mCheck=false;
                 break;//Gör så att loopen fortsätter efter man har kollat på reglerna( ifall man väljer att göra det)
                }
                else
                {
                    mCheck = true;
                    break;
                }
                
            
            case 3:
                
                if (exitGame()==true)
                {
                 mCheck=false;
                 break;
                }
                
                
                   
                    
                
                
            default:
                cout << "ogiltig val, var snäll och välj ett giltig alternativ.\n";
                continue;
        }
        } while (mCheck==true);
        
        
        
        
    }


    void runGame()
    {
        initializeBoard();
        setPlayerIcons();
        loopGame();
        /*printBoard();
        cout << "Where do you want to place your symbol?" << endl;
        cin >> chosenColumn;
        placeSymbolInArray(chosenColumn, playerIndex);
        switchPlayer();
        exitGame();*/
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
        playerIndex = (playerIndex + 1) % 3;
        cout << "Spelare " << (playerIndex + 1) << "s tur\n";
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
                cout << "| " << gameBoard[rows][cols] << " "; //Skriver ut boarden med tomma celler
            }
            cout << "|" << endl;
        }
        for (int col = 0; col < 8; ++col) {
            cout << "----";
        }
        cout << "-" << endl;
    }

    void placeSymbolInArray(int chosenColumn)
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
    bool gameRules()
    {
        bool rCheck = true;
        bool conLoop=true; //skapar variabel som används senare för att avsluta do-While loopen
        cout << "\nSpelet går ut på att tre spelare turas om att släppa ner en spelbricka i ett rutnät med åtta kolumner och åtta rader.\n"
        "Målet är att få fyra brickor i rad - horisontellt, vertikalt eller diagonalt. Om någon får fyra i rad innan rutnätet är fullt, vinner den spelaren. Om rutnätet fylls utan att någon har fått fyra i rad, blir det oavgjort.\n";
      do
      {
        
        cout << ".\n.\n.\n.\nTryck:\n[1] För att återvända till menyn \n[2] För att avsluta programmet.\n";
        int rChoice;
        cin >> rChoice;
        switch (rChoice)
        {
        case 1:
            conLoop=true; //gör conLoop till False så att inf-loopen avslutas och återvänder till menyn
            rCheck = false;
            break;
        case 2:
            if (exitGame()==true)
                {
                 conLoop=false;
                 rCheck=false;
                 break;
                }
        
        default:
            cout << "ogiltig val, var snäll och välj ett giltig alternativ.\n";
            continue; //Loopar om tills programmet får giltig svar
        }
        
      } while (rCheck); // Loopen varar så länge conLoop == True
      return conLoop;
        
        
    }
    //Funktion för att avsluta spelet.
    bool exitGame()
    {
        char answer;
        do
        {
            cout << "Vill du avsluta spelet? \nJa(j) Nej(n): ";            cin >> answer;

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
    //Method som kör spelet tills att spelplanen är full, det finns en vinnare eller spelaren vill avsluta. 
    void loopGame()
    {
        bool eCheck = false;
        while (winner == false && boardFull == false && eCheck==false)
        {
            printBoard();
            cout << "Where do you want to place your symbol?  (type 101 to exit game)" << endl;
            cin >> chosenColumn;
            if (chosenColumn == 101)
            {
                
                eCheck=exitGame();
            }
            else
           { 
            placeSymbolInArray(chosenColumn);
            switchPlayer();
            }
        }
    }
};