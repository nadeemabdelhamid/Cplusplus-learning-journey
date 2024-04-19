#include <iostream>
using namespace std;
  void arr_acc(int arr[],int n){
if (n==0)
return;
arr[n-1]=arr_acc(arr,n-1)+arr[n-1];





  } 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int x;
cin>>x;
int a[x];
for(int i=0;i<x;i++)
cin>>a[i];
arr_acc(a,x);
for(int i=0;i<x;i++)
cout<<a[i]<<" ";



}