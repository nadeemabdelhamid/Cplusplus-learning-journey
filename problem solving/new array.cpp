#include <iostream>
using namespace std;
   void new_array(int arrA[],int arrB[],int arrC[],int  n) {
    int i,j;
    for(i=0;i<n;i++)
    arrC[i] = arrB[i];
    for(j=0;j<n;j++)
    arrC[i+j]=arrA[j];
   

   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;
   cin>>n;
   int a[n],b[n];
   for (int i = 0;i<n;i++)
   cin>>a[i];
   for (int i = 0;i<n;i++)
   cin>>b[i];
   int c[2*n];
   new_array(a,b,c,n);
   for (int i = 0;i<2*n;i++)
   cout<<c[i]<<" ";




}