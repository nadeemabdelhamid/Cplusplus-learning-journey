#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   

int n,cnt=1;

cin>>n;
int* a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=1;i<n;i++)
{
    if(a[i]!=a[i-1])
    {
        cnt++;
        }

}
cout<<cnt;
}