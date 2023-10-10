#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter your number : ";
    cin>>num;
    if(num<10000){
        cout<<"this is a small number";
        }
        else {
            int st,nd,rd,sum;
            st=num%10;//tenth digit of the given no.
            num=num/10;
            nd=num%10;
            num=num/10;
            rd=num%10;
            num=num/10;
            sum=st+nd+rd;
            cout<<sum;
            if(sum%2==0){
                if(st%2!=0||nd%2!=0||rd%2!=0){
                    cout<<"this is good number";}
                    }
                    else{
                        cout<< " this is not a good number";}
                    }
                
            }

    
    

