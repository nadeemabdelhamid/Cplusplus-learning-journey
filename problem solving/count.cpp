#include <iostream>

using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
string x;
char sum=0;
cin>>x;
for(int i=0;i<x.length();i++)
  sum+=x[i]-'0';
  cout<<sum;
}