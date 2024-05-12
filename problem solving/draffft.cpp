#include<bits/stdc++.h>



using namespace std;
int sumRow(int arr[],int n){
int sum=0;
for (int i = 0; i <n;i++)
sum+=arr[i];
return sum;


}
int main(){
int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
cin>>a[i][j];
for(int j=0;j<m;j++)
cout<<sumRow(a[j],n);


}