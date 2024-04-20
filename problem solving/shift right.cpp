#include <iostream>
using namespace std;
   void shift(int arr[], int n)  

arr[n-1]=arr[0];



}



} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int x,n ;
cin>>x>>n;
int a[x];
for(int i=0;i<x;i++)
cin>>a[i];
while(n--){
    shift(a,x);
}
for(int i=0;i<x;i++)
cout<<a[i]<<" ";





}