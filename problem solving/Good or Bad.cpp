#include <iostream>
#include<string>
using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int y;
string x;
bool check=false;
cin>>y;
while(y--){
    cin>>x;
for(int i=0;i<x.length();i++)
if(x[i]=='0'&&x[i+1]=='1'&&x[i+2]=='0'){
    check=true;
    break;
    }
else if( x[i]=='1'&&x[i+1]=='0'&&x[i+2]=='1'){
    check=true;
    break;
    }


  if(check)
  cout<<"Good\n";
  else 
  cout<<"Bad\n";
  check=false;

}

}