#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main() {
     // Generate a random number between 1 and 100
     srand(time(0)) ;
    int Number = ((rand() % 100 )+ 1);

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess == Number) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (userGuess < Number) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }

    } while (userGuess != Number);
    return 0;
}

