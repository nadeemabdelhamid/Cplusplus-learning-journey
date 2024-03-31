#include<iostream>
using namespace std;
int* arr(int a[],int n){

    int* ptr=new int[n*2];
    

    for (int i=0;i<n;i++) {
        *(ptr+i)=a[i];    

    }
    for (int i=n;i<n*2;i++) {
        *(ptr+i)=0;    

    }
    return ptr;
}
int main(){
int n;
cin>>n;
int x[n];
for(int i=0;i<n;i++){
cin>>x[i];


}
int  *p = arr(x,n);
cout<<"The array after doubling is : ";
for(int i=0;i<2*n;i++)
{
    cout<<*(p+i)<<" ";
}


}