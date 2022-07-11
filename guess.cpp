#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int computerNumber, userNumber, win = 0, loss = 0;

    int index = 1;

    /* initialize random seed: */
    srand (time(NULL));
    
    while (index < 6) // Player will be able to play 5 times.
    {
        /* generate secret number between 1 and 3 */
        computerNumber = rand() % 3 + 1;

        cout << "Guess a number or '4' to quit: " << endl;
        cin >> userNumber;

        if (userNumber ==  4)
        {
           break;
        }
        else if (userNumber ==  computerNumber)
        {
            win++;
            cout << "You win."<<endl;
            cout << "Win = " << win << ", Loss = " << loss << "." << endl;
        }
        else if (userNumber !=  computerNumber)
        {
            loss++;
            cout << "You lose."<<endl;
            cout << "Win = " << win << ", Loss = " << loss << "." << endl;
        }
        else
        {
            cout << "You entered an invalid guess." << endl;
            cout << "Guess a number or '4' to quit: " << endl;
        }
        cout<< ""<<endl;
        index++;
    }
    
    cout<< "Thanks for playing." << endl;
    cout << "Your score for " << index << " attempts is: ";
    cout << "Win = " << win << ", Loss = " << loss << "." << endl;
   
   return 0;
}