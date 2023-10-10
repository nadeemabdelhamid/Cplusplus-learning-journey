#include<iostream>
using namespace std;
int main(){
    int a,b,op;
cout<<"choose operation:\n";
cout<<"1-add\n2-subtract\n3-multply\n4-divide";
cin>>op;
cout<<"enter two integers";
cin>>a>>b;
if(op==1){
    cout<<a<<"+"<<b<<"="<<a+b;
}
else if (op==2) {
    cout << b <<"-"<<a<<"="<<(b - a);}
    else  if (op == 3 ) {
        cout<<a<<"*"<<b<<"="<<a*b;
    }
    else  if (op == 4 ) {
       (b==0? cout<<"invalid input":  cout<<a<<"/"<<b<<"="<<a/b);
           
        }
        return 0;
    }




