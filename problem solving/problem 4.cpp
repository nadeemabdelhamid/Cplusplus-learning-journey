#include<iostream>
using namespace std;
int main(){
int n,l,r;
int cnt=0;
int a[15];
cout<<"Enter the number of elements in array: ";
cin>>n;
cout<<"enter the boundries";
cin>>l>>r;
cout<<"enter numbers";
if(l>r){
for(int m=0;m<n;m++){
cin>>a[m];
}
for(int i=r;i<=l;i++){
cnt=0;
for(int  j=0;j<n;j++){
if(a[j]==i)
cnt++;
}
cout<<cnt<<" ";
}



}
else if(l<r){
for(int m=0;m<n;m++){
cin>>a[m];
}
for(int i=l;i<=r;i++){
cnt=0;
for(int  j=0;j<n;j++){
if(a[j]==i)
cnt++;
}
cout<<cnt<<" ";
}



}





}