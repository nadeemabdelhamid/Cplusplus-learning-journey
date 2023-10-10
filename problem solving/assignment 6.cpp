#include<iostream>
using namespace std;
int main(){
    int num ,x1,x2,x3,x4,x5,count1=0,count2=0;
    cout<<"enter a number";
    cin>>num;
    cout<<"enter 5 integers to compare";
    cin>>x1>>x2>>x3>>x4>>x5;
    (x1<=num? count1++:count2++);
    (x2<=num? count1++:count2++);
    (x3<=num? count1++:count2++);
    (x4<=num? count1++:count2++);
    (x5<=num? count1++:count2++);
    cout<<"numbers <= "<<num<<":"<<count2<<endl;
    cout<<"numbers > "<<num<<":"<<count1;


}
