#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
   int x,p,q,cnt=0;
   cin>>x;
   while(x--){
cin>>p>>q;
if(p<q&&(q-p)>=2)
cnt++;


   }
   cout<<cnt;
}