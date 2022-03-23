#include <array>
#include <iostream>
#include <string>
#include "getFromPlayer.hpp"
#include "playGuessTheNumber.hpp"
#include "playHangman.hpp"
#include "rand.hpp"

void displayMenu()
{
    std::cout << "\nWhat game do you wanna play?" << std::endl;
    std::cout << "1 - Guess The Number \n2 - Hangman \nq - Quit";
}

int main()
{
    bool quit = false;

    while (!quit) {
        displayMenu();

        switch (getFromPlayer<char>()) {
        case '1':
            playGuessTheNumber();
            break;
        case '2':
            playHangman();
            break;
        case 'q':
            std::cout << "Goodbye!\n";
            quit = true;
            break;
        default: break;
        }
    }
}