#include<iostream>
using namespace std;
enum days{sun,mon,tue,wed,thu,fri,sat};
int main()
{
    float x[7]; 
    float total=0; // array of 7 integers to store
    for(int i=sun;i<=sat;i++){


        cin>>x[i];

    }
    for(int i=sun;i<=sat;i++){

total+=x[i];
        

    }
cout<<total;
}