#include <iostream>


int main() {
    // printing a menu for the exchange
    // 1. Printing help
    std::cout << "1: Print help" << std::endl;
    // 2. Print exchange stats
    std::cout << "2. Print exchange stats" << std::endl;
    // 3. Make an offer
    std::cout << "3. Make an offer" << std::endl;
    // 4. Make a bid
    std::cout << "4. Make a bid" << std::endl;
    // 5. Print wallet
    std::cout << "5. Print wallet" << std::endl;
    // 6. Continue
    std::cout << "6. Continue" << std::endl;

    std::cout << "=========================" << std::endl;

    int userChoice;

    while (true) {
        std::cout << "Choose an option from 1 to 6: " << std::endl;
        std::cin >> userChoice;
        std::cout << "You chose option: " << userChoice << std::endl;


        switch(userChoice) {
        case 1:
            std::cout << "Printing help..." << std::endl;
            break;
        case 2:
            std::cout << "Printing exchange stats..." << std::endl;
            break;
        case 3:
            std::cout << "Plase, make an offer..." << std::endl;
            break;
        case 4:
            std::cout << "Please, make a bid..." << std::endl;
            break;
        case 5:
            std::cout << "Printing wallet..." << std::endl;
            break;
        case 6:
            std::cout << "Executing..." << std::endl;
            break;
        default:
            std::cout << "Bad input, please chose a valid option!" << std::endl;
        }
    }
}
