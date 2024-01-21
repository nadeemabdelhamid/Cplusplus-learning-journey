#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a>b||a==b){
    (a%b)? cout<<"No Multiples":cout<<"Multiples";
}
if(a<b){
    (b%a)? cout<<"No Multiples":cout<<"Multiples";
}


}