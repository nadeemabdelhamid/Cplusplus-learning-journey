#include<iostream>
using namespace std;
void swap(int a[],int x){
int temp;
for(int i=0;i<x/2;i++){
temp=a[i];
a[i]=a[x-i-1];
a[x-i-1]=temp;
}
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,index;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
if(a[i]==0){
 index=i;
swap(a,index);

}
}
for(int i=0;i<n;i++)
cout<<a[i];


}