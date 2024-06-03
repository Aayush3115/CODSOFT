//Number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    // Generates a random number 
    int number_to_guess = rand() % 100 + 1;
    int guess = 0;

    cout << "I have selected a number between 1 and 100." << endl;

    // Loop until the user guess the correct number
    while (guess != number_to_guess) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number_to_guess) {
            cout << "Too high! Try again." <<endl;
        } 
        else if (guess < number_to_guess) {
            cout << "Too low! Try again." << endl;
        } 
        else {
            cout << "Congrats! You guessed the correct number." << endl;
        }
    }

    return 0;
}
