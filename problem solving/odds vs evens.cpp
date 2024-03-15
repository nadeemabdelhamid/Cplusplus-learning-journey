#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int n;
cin>>n;
double a[n];
for(int i=0;i<n;i++)
cin>>a[i];
    double sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        if (i%2==0){
            sum1+=a[i];
            }else{
                sum2+=a[i]; 
            }  


        }

    if(sum1>sum2)
    cout<<"Odd";
    else if(sum1<sum2)
    cout<<"Even";
    else
    cout<<"Equal";


    }


    
