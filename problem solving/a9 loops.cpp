#include<iostream>
using namespace std;
int main(){
int n,i=1,j=0;
cout<<"enter a number"<<endl;
cin>>n;
while(n>i){
   if(j%3==0&&j%4!=0){
    cout<<j;
i++;
   }
    j++;
}


}