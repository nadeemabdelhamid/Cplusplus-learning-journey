#include<iostream>
using namespace std;
int abs(int a){
if(a<0)
return -a;
else 
return a;



}
int main() {
int n ,sum=0;
cin>>n;
int  arr[n];
for(int i=0 ;i<n;i++)
cin>>arr[i];
for(int i=0;i<n;i++){
sum+=arr[i];


}

cout<<abs(sum);

}