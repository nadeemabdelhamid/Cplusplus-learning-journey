#include<iostream>
using namespace std;
int main(){
int n,maxIndex,minIndex;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[n];
}
minIndex=0;
maxIndex=0;
  for(int i=0;i<n;i++){
    if(a[i]>a[maxIndex]) 
    maxIndex=i;
    if(a[i]<a[minIndex])
    minIndex=i;


}


cout<<a[minIndex];
cout<<a[maxIndex];



}