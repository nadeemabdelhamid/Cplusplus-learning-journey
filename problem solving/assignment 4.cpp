#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: \n";
    cin>>num;
    if(num%2 == 0){
        cout<<"last digit: "<<num%10<<endl;
    }
    else if (num%2!=0){
if(num<1000){
cout<<"last 2 digits "<<num%100;
}
else if(num>=1000&&num<1000000){
cout<<"last 4 digits :"<<num%10000;
}
else{
    cout<<"negative value : "<<-num;
}
    }

   
    return 0;
}