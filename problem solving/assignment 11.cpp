#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"enter number of rows\n";
cin>>rows;
int i=1;
while(i<=rows){
    int n=1;
    while(n<=i){
        cout<<"*";
        n++;
    }
    cout<<endl;
    i++;

}
}