#include <iostream>
using namespace std;
   int arrmax(int arr[],int n){
if(n==1) return arr[0]; 
int sub=arrmax(arr,n-1);
return max(sub,arr[n-1]);




   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
   cin>>a[i];
   cout<<arrmax(a,n);
  
}