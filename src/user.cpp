#include <iostream>
#include <string>
#include "../header/user.h"
using namespace std;

User::User()
{
    cout << "User Created!" << endl;
}

User::User(string name)
{
    userName = name;
    cout << "New user " << userName << " Created!" << endl;
}

User::~User()
{
    cout << "User Destroyed!" << endl;
}
