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
        User();
        ~User();
        
        string getUserName() {
            return userName;
        }

        int getUserAge() {
            return userAge;
        }

        void setUserName(string uName) {
            userName = uName;
        }

        void setUserAge(int uAge) {
            userAge = uAge;
        }
};

#endif
