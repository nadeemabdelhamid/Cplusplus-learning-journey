#include <iostream>
using namespace std;
   void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;


   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int x,y;
   cin>>x>>y;
swap(x,y);
cout<<x<<" "<<y;


}