#include <iostream>
#include <string>
#include "header/user.h"
using namespace std;

int main() {

    User u;

    string name;
    char choice;

    cout << "Hai! Please type your name on the keyboard with your pawbs, fren! Then press enter." << endl;
    cin >> name;
    u.setUserName(name);

    cout << "Your username is: " << u.getUserName() << ". Dat your name? (Y/n)" << endl;
    cin >> choice;

    if(choice == 'Y')
    {
        cout << "That great fren! I like your name!" << endl;
        return 0;
    }
    else
    {
        cout << "Try again fren! Doin me a heccin excite :3" << endl;
    }

    return 0;


};