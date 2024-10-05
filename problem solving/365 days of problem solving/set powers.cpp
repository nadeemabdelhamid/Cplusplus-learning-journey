#include<iostream>
using namespace std;
void set_pow(int *a ,int len=5,int m=2){
    a[0]=1;
for(int i=0;i<len-1;i++){
a[i+1]=a[i]*m;



}



}
int main(){
    int len ,m;
cin>>len>>m;
    int* a=new int [len];
set_pow(a,len,m);
for(int i=0;i<len;i++)
cout<<a[i]<<" ";
}