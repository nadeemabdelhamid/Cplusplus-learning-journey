#include<iostream>
using namespace std;
int main(){
int nums[15],b,target,c,d,sum=0;
cout<<"enter how many numbers will be entered (max 15): ";
cin>>b;
for(int i=0;i<b;i++)
cin>>nums[i];
cout<<"Enter the target number:"<<endl;
cin>>target;
for(int i=0;i<b;i++){
if(sum==target)
break;
for(int j=0;j<=b;j++){
sum=nums[i]+nums[j];
if(sum==target){
cout<<i<<','<<j<<endl;
break;
}

}




}
}