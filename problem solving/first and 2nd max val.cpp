#include<iostream>
using namespace std;
int main(){
int numbers[25],b;
cin>>b;
for(int i=0;i<b;i++){

cin>>numbers[i];

}
int maxindex=0;
for(int j=1;j<b;j++){
if(numbers[j]>numbers[maxindex])
{
    maxindex=j;
}
}
int max1=numbers[maxindex];

numbers[maxindex]=0;
maxindex=0;
for(int j=1;j<b;j++){
if(numbers[j]>numbers[maxindex])
{
    maxindex=j;
}


}
int max2=numbers[maxindex];
cout<<max1<<" "<<max2;

}