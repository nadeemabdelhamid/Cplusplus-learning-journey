#include<iostream>
using namespace std;
int main(){
int int_count;
cout<<"how many integers"<<endl;
cin>>int_count;
double evensum=0,oddsum=0;
int evencount=0,oddcount=0,i=1;

while(i<=int_count){
    int value;
    cin>>value;
    if(i%2==0){
        evensum+=value ,evencount++;}
         else {
            oddsum+=value , oddcount++;
            }
            i++;
        }
    cout<<evensum/evencount<<endl;
    cout<<oddsum/oddcount<<endl;
    }


