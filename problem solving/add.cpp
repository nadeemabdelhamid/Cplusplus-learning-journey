#include <iostream>
using namespace std;
   double sum(int a,int b){
return a+b;


   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a,b;
    cin>>a>>b;
cout<<sum(a,b);
}