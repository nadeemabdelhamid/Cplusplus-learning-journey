#include<iostream>
using namespace std;
void abs(int &a)  {
if(a<0)
a= -a;




}
int main(){
int n,sumP=0,sumS=0;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cin>>a[i][j];

}
for(int i=0;i<n;i++){
   sumP+=a[i][i];

}



for(int i=0;i<n;i++){
sumS+=a[i][n-i-1];


}

cout<<abs(sumP-sumS);





}