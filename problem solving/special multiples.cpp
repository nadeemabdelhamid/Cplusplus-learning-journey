#include<iostream>
using  namespace std;
int main(){
int n,cnt=0,i=1;
cin>>n;
while(cnt<n){
if(i%3==0&&i%4!=0){
cout<<i<<" ";
cnt++;

}
i++;

}



}