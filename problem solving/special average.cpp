#include<iostream>
using namespace std;
int main(){
    int n;
float num,e=0,o=0,ecnt=0,ocnt=0;
cin>>n;
while(n--){
    cin>>num;
if(n%2==0){
e+=num;
ecnt++;
}
if(n%2==1){
o+=num;
ocnt++;
}


}
cout<<"avr of numbers in odd number = "<<float(e/ecnt)<<endl;
cout<<"avg of numbers in even number = "<<float(o/ocnt)<<endl;
}