#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include "contact_manager.h"
using namespace std;
class ui :public contact_manager
{
private:
    int choise;
public:
    void display_menu() {


        cout << "MAIN MENU\n";
        cout << "=====================\n";
        cout << "[1] Add a new contact: \n";
        cout << "[2] List all contacts: \n";
        cout << "[3] Search for contact: \n";
        cout << "[4] Edit a contact: \n";
        cout << "[5] Delete a contact: \n";
        cout << "[0] Exit\n";
        cout << "=====================\n";







    }
    void getUserInput() {
        do {
            display_menu();
            cout << "Enter the choise: ";
            cin >> choise;
            choises(choise);
        } while (choise != 0);



    }
    void choises(int ch) {
        switch (ch) {
        case 0:cout << "Exiting bye bye !";
            return;
        case 1:addContact();
            break;
        case 2:listAllContact();
            break;
        case 3:SearchForContact();
            break;
        case 4:editAContact();
            break;
        case 5:DeleteAContact();
            break;
        default:cout << "enter your choise from(0-5)\n";
            break;




        }



    }
};

