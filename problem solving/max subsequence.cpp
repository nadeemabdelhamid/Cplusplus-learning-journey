#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string x;
    cin>>x;
    int n=x.length();
    bool cnt[n]={false};
    int cntt=0;
    for(char i:x){
if(i!=i+1||i!=i-1)
cntt++;



    }
  
    cout<<cntt++;
    
    
}