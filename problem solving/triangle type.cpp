#include<iostream>
using namespace std;
string typo(int s[]){
bool valid=false;
if(s[0]+s[1]>=s[2]&&s[1]+s[2]>=s[0]&&s[0]+s[2]>=s[1])
valid=true;
if(valid){
if(s[0]==s[1]&&s[1]==s[2])
return  "Equilateral";
else if(s[0]!=s[1]&&s[1]!=s[2])
return  "Scalene";
else
cout<<"isosles triangle\n";
}
else 
return "none";
}
int main(){
int s[3];
cout<<"enter sides of the triangle\n";
for(int i=0;i<3;i++)
cin>>s[i];
cout<<typo(s)<<" "<<"triangle";
return 0;
}






