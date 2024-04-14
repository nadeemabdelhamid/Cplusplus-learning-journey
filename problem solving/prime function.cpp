#include <iostream>
using namespace std;
   string primefun(int n){
    if(n<=1)
    return "NO";
    for(int i=2;i<n;i++){
        if(n%i==0)
        return "NO";

    }


return "YES";
   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
int x;
cin>>x;
cout<<primefun(x);
cout<<endl;


    }



}