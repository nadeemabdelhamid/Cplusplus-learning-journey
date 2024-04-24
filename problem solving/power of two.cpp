#include <iostream>
using namespace std;
   bool powerr(int x){
   while(true){
x=x/2;
if(x==1) break;
if(x%2==1)
return false;



   }
   return true;



   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int x;
   cin>>x;
   if(powerr(x))
   cout<<"YES";
   else 
   cout<<"NO";
   
}