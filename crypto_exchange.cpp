#include <iostream>


void printMenu() {
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
}

int getUserOption() {
    int userOption = 0;
        std::cout << "Choose an option from 1 to 6: " << std::endl;
        std::cin >> userOption;
        std::cout << "You chose option: " << userOption << std::endl;
        return userOption;
}

void printHelp() {
    std::cout << "Printing help..." << std::endl;
}

void printMarketStats() {
    std::cout << "Printing exchange stats..." << std::endl;
}

void enterOffer() {
    std::cout << "Plase, make an offer..." << std::endl;
}

void enterBid() {
    std::cout << "Please, make a bid..." << std::endl;
}

void printWallet() {
    std::cout << "Printing wallet..." << std::endl;
}

void gotoNextTimeFrame() {
    std::cout << "Going to next time frame..." << std::endl;
}

void processUserOption(int userOption) {
    switch(userOption) {
    case 1:
        printHelp();
        break;
    case 2:
        printMarketStats();
        break;
    case 3:
        enterOffer();
        break;
    case 4:
        enterBid();
        break;
    case 5:
        printWallet();
        break;
    case 6:
        gotoNextTimeFrame();
        break;
    default:
        std::cout << "Bad input, please chose a valid option!" << std::endl;
    }
}


int main() {
    while (true) {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
}
