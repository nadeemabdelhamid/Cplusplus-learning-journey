#include <iostream>
using namespace std;
int fun(int arr[],int n){
   
   bool s[2001]={false};
   int cnt=0;
for(int i=0;i<n;i++){
if(!s[arr[i]+1000]){
    s[arr[i]+1000]=true;
    cnt++;


}



}return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;
   
cin>>n;
   int  a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];


cout<<fun(a,n);
}
