#include<iostream>
using namespace std;
void sorting(int  arr[], int n) {
int minIndex;
for(int i=0;i<n;i++){
minIndex=i;
for(int j=i+1;j<n;j++)
if(arr[j] < arr[minIndex])
minIndex = j;
swap(arr[i], arr[minIndex]);
}}
void swap(int&x,int&u){
int temp =x;
x=u;
u=temp;

}







int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sorting(a,n);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";

    
}