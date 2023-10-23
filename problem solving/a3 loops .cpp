#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
cout<<"==program to display n terms of natural numbers and their sum.==\n";
cout<<"enter num of terms\n";
cin>>n;
for(int i=1;i<=n;i++){
cout <<" "<<i;
sum+=i;

}
cout<<"\nthe sum of the first "<<n << " natural numbers is : "<<sum;

}