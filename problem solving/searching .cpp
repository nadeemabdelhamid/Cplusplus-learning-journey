#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
   
for(int i=0;i<n;i++){
if(arr[i]==x) {
 return i;
}




}
return -1;  //element not found in the array.



}
int  main(){
int n,a;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cin>>a;

cout<<search(arr,n,a);



}