#include <iostream>
using namespace std;

//Funktion för att avsluta spelet
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

//Förslag på hur mainfunktionen kan se ut med funktionen
/*int main() 
{
    do
    { 
        cout << "Spelet fortsätter...\n";

 
        if (exitGame()) 
        {
            cout << "Spelet avslutas.\n";
            break;
        }
        
    } while (true);

    return 0;
}*/