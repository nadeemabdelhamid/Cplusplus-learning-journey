#include<iostream>
using namespace std;
int main(){
int n;
float sum=0.0;
cout<<"enter number of elements\n";
cin>>n;
int a[n];
int *ptr;
ptr=a;
for(int i=0;i<n;i++)
cin>>*(a+i);
for(int i=0;i<n;i++){
sum+=*(a+i);


}
float mean=sum/n;
cout<<"mean : "<<mean<<endl;


}