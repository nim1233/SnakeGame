#include "helper.h"
#include <unistd.h>
#include <ctime>

int main() {
    cout << "Welcome User. Use WASD to move around. Press x to EXIT" << endl;
    cout << "Press Enter to start the game..." << endl;
    cin.ignore();  // Wait for the user to press Enter
    srand(time(0));  // Initialize random seed
    Setup();
    while (!game_over) {
        Draw();
        Input();
        Logic();
        usleep(100000);  // Sleep for 100 milliseconds
    }
    cout << "Thanks for playing! Your final score is: " << score << endl;
    return 0;
}
