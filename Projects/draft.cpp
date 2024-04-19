#include<iostream>
#include<string>
using namespace std;


int main() {
    int choise;
        int n,i=0;
      
string specialization[20][5]={"n"},name;
for(int i=0;i<20;i++)
for(int j=0;j<5;j++)
specialization[i][j]="0";


do{
cout<<"enter your choice:\n";
cout<<"1) Add new patient\n";
cout<<"2) print all patients\n";
cout<<"3) get next patient\n";
cout<<"4) exit";
cin>>choise;
switch(choise){
case 1: cout<<"\nEnter specialization , name , status:";

        cin>>n>>name>>stat;
        if(i==5){
            cout<<"sory we cant add more patients for this speciliazation\n";
            break;
        }
        if(stat=="0")
        stat="regular";
        else
        stat="urgent";
    specialization[n-1][i++]=name+" "+stat;

break;
case 2:
cout<<"enter specilization: ";
cin>>n;
for(int j=0;j<i;j++){
if(specialization[n-1][0]=="0"){
cout<<"no data in "<<n<<"th specialization \n";
break;

}
else
cout<<specialization[n-1][j]<<endl;

}
break;
case 3:
cout<<"enter specilization: ";
cin>>n;
if(specialization[n-1][0]=="0"){
cout<<"no data in "<<n<<"th specialization \n";
break;


 

}

break;




}}while(choise!=4);
}







