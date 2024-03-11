#include <iostream>

using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int l,r,x,n,q;
cin>>n>>q;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
while(q--){
cin>>l>>r>>x;
int cnt=0;
for(int i=l-1;i<=r-1;i++){
if(a[i]==x)
cnt++;

}
cout<<cnt<<" ";





}
 


}