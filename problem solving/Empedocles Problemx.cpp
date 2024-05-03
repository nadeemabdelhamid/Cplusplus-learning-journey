#include<iostream>
#include<vector>
using namespace std;
int main() {
    int x;
    string cc;
    cin>>x;
vector<vector <string>> n(x,vector<string>(4));
for (int i=0;i<x;i++) 
    for (int j=0;j<4;j++)
     cin>>n[i][j];
bool found=true;

for(int i=0;i<4;i++){
cc=n[0][i];
for(int j=1;j<x;j++){
    if(cc!=n[j][i]){
    found=false;
    break;

    }




}

}

if(!found)
cout<<"you were right";
else
cout<<"Empedocles was right";











}