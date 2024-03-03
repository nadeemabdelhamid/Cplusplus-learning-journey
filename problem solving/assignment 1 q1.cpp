#include<iostream>
using namespace std;
void sorting(int a[], int n) {
int minIndex;
for(int i=0;i<n;i++){
minIndex=i;
for(int j=i+1;j<n;j++) 
if(a[j] < a[minIndex])
minIndex =j;
swap(a[i],a[minIndex]);



}}
void swap(int  &x, int &y){
int temp;
temp = x;
x = y;
y = temp;




}
int main() {
int n;
cout << "Enter the number of elements: ";
cin >> n;
int nadeem[n];
int *ptr;
ptr=nadeem;
for(int i=0;i<n;i++)
cin>>*(nadeem+i);

sorting(nadeem,n);
float median=(nadeem[(n/2)-1]+nadeem[n/2])/2.0;
cout<<"\nmedian : "<<median;



}