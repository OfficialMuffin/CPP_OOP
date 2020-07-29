#ifndef _USER_H_
#define _USER_H_

#include <iostream>
#include <string>
using namespace std;

class User
{
    private:
        string userName;
        int userAge;
    public:
        User(); // Default Constructor
        User(string name);
        ~User(); // Destructor
        
        // Get usersname
        string getUserName() {
            return userName;
        }

        // Set username
        void setUserName(string uName) {
            userName = uName;
        }
};

#endif
