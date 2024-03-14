#include <iostream>
#include<string>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x;
    getline(cin,x);
if(x[0]>='a'&&x[0]<='z'){
x[0]-=32;
}
    for(int i=1;i<x.length();i++) {
if(x[i]>='A'&&x[i]<='Z')
x[i]+=32;




    }
    cout<<x;
    
}