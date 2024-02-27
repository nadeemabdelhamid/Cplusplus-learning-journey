#include<iostream>
using namespace std;
int main(){
char x[6]={'(', ')', '{', '}', '[' ,']'};  
string y;
bool check;
cin>>y;
for(int i=0;i<y.length();i++){
    check  = false;   
if(y[i]==x[0]&&y[i+1]==x[1]||y[i]==x[2]&&y[i+1]==x[3]||y[i]==x[4]&&y[i+1]==x[5]){
       check=true;
       i++;
}


}

if(check)
cout<<"true";

}