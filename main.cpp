#include <iostream>
#include <string>
#include "header/user.h"
using namespace std;

int main() {

    string name;
    char choice;

    cout << "Hai! Please type your name on the keyboard with your pawbs, fren! Then press enter." << endl;
    cin >> name;

    User user(name);

    cout << "Your username is: " << user.getUserName() << ". Dat your name? (Y/n)" << endl;
    cin >> choice;

    if(choice == 'Y')
    {
        cout << "That great fren! I like your name!" << endl;
        return 0;
    }

    else if (choice == 'n')
    {
        cout << "Try again fren! Doin me a heccin excite :3" << endl;
    }
    
    else
    {
        
        cout << "Do you want to quit? (Y/n)" << endl;
        cin >> choice;

        if (choice == 'Y')
        {
            return 0;
        }
        else
        {
            // Re-run the program
        }
        
    }

    return 0;

};