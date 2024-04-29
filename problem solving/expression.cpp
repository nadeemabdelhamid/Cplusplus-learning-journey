#include <iostream>
#include<string>
using namespace std;
   bool palindrome(string s)  {
      int n = s.length();
      for (int i=0;i<n/2;i++) {
         if (s[i] != s[n-1-i]) return false;
      }
      return true;
   }

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   string y= "abcdefghijklmnopqrstuvwxyz";
   string x;
   int cnt=0
   cin>>x;
   for(int i=0;i<x.length();i++) {
    if(x[i]=='?'){
    x[i]=y[cnt++];
    

    }




   }

}