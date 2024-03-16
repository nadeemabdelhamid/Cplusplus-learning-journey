#include <iostream>
#include <string>
using namespace std;

string palindrome(string str) {
    char tmp;
    for (int i = 0; i < str.length() / 2; i++) {
        tmp = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = tmp;
    }
    return str;
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x;
    cin >> x;
   
if(palindrome(x)==x)
   cout<<"YES";
else
   cout<<"NO";
    return 0;
}