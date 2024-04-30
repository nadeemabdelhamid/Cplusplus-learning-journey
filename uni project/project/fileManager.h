#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int Num = 0;

class fileManager
{
public:
    static void WriteToFile() {
        ofstream outFile("contacts.txt", ios::out);
        string name, address, phoneNumber;
        outFile << "===========Data list===========\n";
        for (int i = 0; i < Num; i++) {
            outFile << "[" << i + 1 << "]" << "Name:" << x[i].getname() << "," << "Phone num: " << x[i].getphoneNum() << ", "
                << "Address: " << x[i].getaddress() << ", " << "Email: " << x[i].getemail() << endl;
        }
        outFile.close();







    }
};

