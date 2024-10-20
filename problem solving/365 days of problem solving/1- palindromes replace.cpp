#include<iostream>
using namespace std;



    

int main(){
    string x;
    
    cin>>x;
    int n=x.length();
    for(int i=0;i<x.length()/2;i++){
        char j=x.length()-i-1;
        if(x[i]=='?'&&x[j]=='?')
        x[i]=x[j]='a';
        else if(x[i]=='?'){
        x[i]=x[j];
        

        }
        else if(x[j]=='?'){
        x[j]=x[i];
        

        }
        else if(x[i]!=x[j]){
        cout<<-1;
        return 0;

        }


    }
    if(n%2==1&&x[n/2]=='?')
    x[n/2]='a';

    cout<<x;
    

}