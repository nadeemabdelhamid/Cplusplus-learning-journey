#include <iostream>
using namespace std;
   void sort(int a[], int n){
int maxIndex=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++) 
    if (a[i] < a[j]) {
        maxIndex = j;
    swap(a[maxIndex],a[i]);


   }
   }}
   void swap(int &x, int &y) {
      int temp = x;
      x = y;
      y = temp;}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int x;
   cin>>x;
   int a[x];
   for(int i=0;i<x;i++) 
   cin>>a[i];
   sort(a,x);
  cout<<a[0]<<" "<<a[x-1];

}