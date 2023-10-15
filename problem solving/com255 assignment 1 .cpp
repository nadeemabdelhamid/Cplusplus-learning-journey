//assignment 1
#include<iostream>
using namespace std;
int main(){
int purchase=95;
double State_Sales_Taxes=4.0/100*purchase,County_Sales_Taxes=(2.0/100)*purchase;
cout<<"State Sales Taxes: "<<State_Sales_Taxes<<endl;
cout<<"County Sales Taxes: "<<County_Sales_Taxes<<endl;
cout<<"Total sales taxes : "<<State_Sales_Taxes+County_Sales_Taxes;
return 0;


}