#include<iostream>
using namespace std;
int main(){

    int x,y;
    cin>>x>>y;
    int n=0;
    while(x<=y){
       
        x*=3;
        y*=2;
        n++;
    }
    cout<<n;
}