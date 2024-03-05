#include<iostream>
using namespace std;
int main(){
int n,m,x;
bool exist=false;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++)
cin>>a[i][j];


}
cin>>x;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++)

if(a[i][j]==x){
exist =true;
break;
}

}

if(exist)
cout<<"will not take number";
else
cout<<"will take number";




}