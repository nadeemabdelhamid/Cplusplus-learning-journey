#include<iostream>
using namespace std;
int main(){
int t,num;
cout<<"enter number of test cases\n";
cin>>t;
while(t>0){
cout<<"enter your  number\n";
cin>>num;
int start=1,sum=0;
while(start<=num){
sum+=start;
start++;

}
cout<<sum<<endl;
t--;
}
}