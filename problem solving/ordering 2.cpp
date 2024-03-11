#include <iostream>
using namespace std;
void sort(int arr[], int n) {
    int minIndex;
for(int i=0;i<n-1;i++){

 minIndex=i;
for(int j=i+1;j<n;j++)
if(arr[j]<arr[minIndex])
minIndex=j;
swap(arr[i],arr[minIndex]);



}}
void sortx(int arr[], int n) {
    int maxIndex;
for(int i=0;i<n-1;i++){

 maxIndex=i;
for(int j=i+1;j<n;j++)
if(arr[j]>arr[maxIndex])
maxIndex=j;
swap(arr[i],arr[maxIndex]);



}





}
void swap(int  &x,int &y){
int temp =x;
x=y;
y=temp;




}

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
 cin>>a[i];
 sort(a,n);
for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
 cout<<endl;
 sortx(a,n);
for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
 



 
 
 }