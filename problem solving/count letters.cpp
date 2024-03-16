#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
   int no(string x,char y){
    int cnt=0;
for(int i=0;i<x.length();i++){
if(x[i]==y)
cnt++;




}

return cnt;


   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

string x;
int cnt=0;
cin>>x;



sort(x.begin(),x.end());


for(int i=0;i<x.length();i++) {
if(x[i]==x[i-1])
continue;
cout<<x[i]<<" : "<<no(x,x[i])<<'\n';





}}



    
