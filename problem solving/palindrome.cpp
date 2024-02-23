#include<iostream>
using namespace std;
int main(){
int num,rev;
cout<<"enter a number\n";
cin>>num;
int n=num;
while(num>0){
int digits;
digits=num%10;
num/=10;
rev=rev*10+digits;


}
(n==rev)?  cout << "\nThe given number is a palindrome." : cout << "\nThe given number is not a palindrome.\n" ;


}