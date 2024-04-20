#include<iostream>
#include<string>
using namespace std;
int choise;
const int spec=20;
const int queue=5;
string specialization[spec][queue],name;
int n,z[spec]={0};
int stat[spec][queue]={0};
string stats(int x){
    if(x==0)
    return "regular";
    else 
    return "urgent";
}










void add_patient() {
cout<<"\nEnter specialization , name , status:";
cin>>n>>name>>stat[n-1][z[n-1]];
if(z[n-1]==5) cout <<"No more entries for this specialisation.";

specialization[n-1][z[n-1]]=name;
(z[n-1])++;

}
void  printall(){
    cout<<"enter specialization : ";
    cin>>n;
    if(z[n-1]==0)
    cout<<"no data in this specialization.\n";
    else
        for (int i = 0; i < z[n-1]; i++)
        cout<<i+1<<") "<<specialization[n-1][i]+" "+stats(stat[n-1][i])<<endl;
}
void deletee(string a[queue],int index){
for(int i=index;i<queue-1;i++){
a[i]=a[i+1];



}
z[n-1]--;



}


void getNext(){
cout<<"enter specialization : ";
    cin>>n;
    if(z[n-1]==0)
    cout<<"no patients at this moment. have rest , dr\n";
    else {
    cout<<specialization[n-1][0]<<" please go with dr .";
deletee(specialization[n-1],0);
    }


}
void menu(){
    do{
cout<<"enter your choice:\n";
cout<<"1) Add new patient\n";
cout<<"2) print all patients\n";
cout<<"3) get next patient\n";
cout<<"4) exit\n";
cin>>choise;
switch(choise){
case 1: add_patient();break;
case 2: printall(); break;
case 3:getNext();break;
    }}while(choise!=4);

cout<<"\nthank you! \n";


    }
int main(){
    menu();
}



