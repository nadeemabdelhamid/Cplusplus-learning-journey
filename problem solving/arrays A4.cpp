#include<iostream>
#include<array>
using namespace std;
int main(){
//int vals[]{100, 200, 250, 400, 200};
array<int,5>vals{100, 200, 250, 400, 200};
if(vals.front()+vals.back()>vals.at(2)){
    cout<<"The sum of the first and last elements is greater than the middle element."<<endl;
    int result=vals.front()+vals.back();
    cout<<vals.front()<<"+"<<vals.back()<<"="<<result<<endl;
    cout<<result<<">"<<vals.at(2)<<endl;
}




}