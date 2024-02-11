#include<iostream>
using namespace std;
int main(){
int n,row=1;
cin>>n;

while(row<=n){
    int stars_cnt=1;
    while(stars_cnt<=row){
        cout<<"*";
        stars_cnt++;
    }
    
cout<<endl;
row++;
}



}