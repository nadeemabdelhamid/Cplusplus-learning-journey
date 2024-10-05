#include<iostream>
using namespace std;
bool palindrome(int *a,int n){

int i=0,j=n-1;
while(j>i){
if(a[i]==a[j]){

i++;
j--;

}
else 
return false;

}
return true;

}
int main(){
int n;
cin>>n;
int* a = new int[n];
for(int i=0;i<n;i++)
cin>>a[i];
if(palindrome(a,n))
cout<<"palindrome";
else 
cout<<"not palindrome";



}