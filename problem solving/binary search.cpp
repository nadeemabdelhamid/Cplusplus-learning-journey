#include<iostream>
using namespace std;
bool found(int a [],int n,int x){
for(int i=0;i<n;i++){
if (x==a[i])
return true;


}
return false;




}
int main(){
int n,q,x;
cin>>n>>q;
int a[n];

for(int i=0;i<n;i++) 
cin>>a[i];
while(q--){
cin>>x;
if(found(a,n,x))
cout<<"found\n";
else 
cout<<"not found";


}







}