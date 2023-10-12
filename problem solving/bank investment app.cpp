// bank investment app
#include<iostream>
using namespace std;
int main(){
    int id,a;
    float b;
       float inv;
    string name;
cout<<"welcome to our bank\n";
cout<<"pls enter your name\n";
cin>>name;
cout<<"enter your bank account number\n";
cin>>id;
cout<<"--welcome to your account--";
cout<<"please choose which investment\n";
cout<<"1-platinum\n2-gold\n3-vip";
cin>>a;
cout<<"enter the amount you need to invest";
cin>>b;
switch(a){
    case 1:
    if(b<250000){
        cout<<"you entered a low amount\n";
     }
     else{
    inv=b*11/100;
    cout<<"your net cash in every month : "<<inv/12;
     }
     break;
     case 2: 
     if(b<500000){
        cout<<"you entered a low amoun\nt";
        
     }else{
            cout<<"you choosed gold investment\n";
    inv=b*17/100;
    cout<<"your net cash in every month : "<<inv/12;
     }
     break;
     case 3: 
     if(b<1000000){
        cout<<"you entered a low amount\n";
        
     }else{
            cout<<"you choosed vip investment\n";
    inv=b*25/100;
    cout<<"your net cash in every month : "<<inv/12<<endl;
     }
     break;
}
cout<<"thanks for choosing our bank";
}