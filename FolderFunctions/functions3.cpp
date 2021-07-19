#include <iostream>
using namespace std;

void showMenu()
{
        std::cout << "1. Search" << '\n';
        std::cout << "2. View Record" << '\n';
        std::cout << "3. Quit" << '\n';
}

int getInput()
{
        std::cout << "Enter selection" << '\n';

        int input;
        std::cin >> input;

        return input;
}

void processSelection(int option)
{
        switch (option)
        {
        case 1:
                cout << "Searching..." << endl;
                break;
        case 2:
                cout << "Viewing ..." << endl;
                break;
        case 3:
                cout << "Quitting ..." << endl;
                break;
        default:
                cout << "Please select on item from the menu." << endl;
        }
}

int main() {

        showMenu();
        int selection = getInput();
        processSelection(selection);

        return 0;
}
