#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n%10!=0){
    int i;
    i=n;
i=i%10;
cout<<i;
n=n/10;
}


}