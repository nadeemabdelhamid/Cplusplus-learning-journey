#include <iostream>
#include<string>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
string x,y;
string target="hello";
int index=0;
cin>>x;
for (char i:x){
if(i==target[index])
index++;


}

if(index==target.size())
cout<<"YES";


else 
cout<<"NO";







}