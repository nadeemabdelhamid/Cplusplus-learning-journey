#include<iostream>
using namespace std;
int main(){
    int n,m,x;
cout<<"enter test cases\n";
cin>>n;
while(n--){       //test cases

cout<<"enter no of integers\n";
cin>>m;
int i=0,min;
while(i<m){           //minimum num
cin>>x;
if(i==0)
min=x;
if(x<=min)
min=x;
i++;



}
cout<<min<<endl;
}





}