#include <iostream>
using namespace std;
   void print(int x,char c){
cout<<c<<" ";
if(x==1)
return;
print(x-1,c);




}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
cin>>x;
while(x--){
char c;
int x;
cin>>x>>c;
print(x,c);
cout<<'\n';
   
}}