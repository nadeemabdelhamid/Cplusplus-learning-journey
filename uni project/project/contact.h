#pragma once
#include<iostream>
#include<string>

using namespace std;
class contact
{
private:
	string name;
	string address;
	string email;
	string phoneNum;
public:
	void setname(string N) { name = N; }
	void setaddress(string A) { address = A; }
	void setemail(string E) { email = E; }
	void setphoneNum(string P) { phoneNum = P; }
	string getname() { return name; }
	string getaddress() { return address; }
	string getemail() { return email; }
	string getphoneNum() { return phoneNum; }
};
contact x[100];


