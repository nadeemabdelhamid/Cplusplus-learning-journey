#include<iostream>
using namespace std;
bool found(int arr[], int n, int x){
for(int i=0;i<n;i++){
if(x==arr[i])
return true;


}

return false;



}
int main(){
int n,cnt=0;
cin>>n;
int x[1000];
int y[1000];
for(int i=0;i<n;i++)
cin>>x[i];
for(int i=0;i<n;i++)
cin>>y[i];
for(int i=0;i<n;i++){
if(found(x,n,y[i])){
cnt++;

}



}

if(cnt==n)
cout<<"yes";
else
cout<<"no";



}