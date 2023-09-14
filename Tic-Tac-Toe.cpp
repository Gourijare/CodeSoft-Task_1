#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    do {
        std::cout << "Enter your guess (1-100): ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the secret number " << secretNumber << " in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
