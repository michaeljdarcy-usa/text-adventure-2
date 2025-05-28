#include <iostream>

// Define the player object
struct Player
{       
    std::string name;
};

// Create an instance of the player
Player player;

int main() 
{
    std::cout << "You look like a good Joe!" << std::endl;
    std::cout << "How may I be of help to you? I offer a variety of services." << std::endl;
    std::cout << "Would you like me to give you a message, or perhaps prepare a hot dinner?" << std:: endl;
    std::cout << "Enter 1 for a massage.\nEnter 2 for dinner." << std::endl;

    // Accept and store player input
    int playerChoice{};
    std::cin >> playerChoice;

    // Initialize game state to be active
    bool isPlaying = true;

    while (isPlaying)
    {
        if (playerChoice == 1)
        {
            std::cout << "You receive a massage!" << std::endl;
        }
        else if (playerChoice == 2)
        {
            std::cout << "You eat a hot steak!" << std::endl;
        }

        std::cout << "By the way, what is your name?" << std::endl;
        std::cin >> player.name;
        std::cout << "It is a pleasure, " << player.name << "." << std::endl;
    }
    return 0;
}
