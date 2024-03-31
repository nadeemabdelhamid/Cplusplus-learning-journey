#include <iostream>
using namespace std;
struct car{
    int ManufacturingYear;
    int cylinders;
    int PlateNumber;
    
    
};
    int index(car c[4],int n){
        for(int i=0;i<4;i++){
            if(n==c[i].PlateNumber)
            return i;
        }
        
        
    }
int main()
{
    car c[4];
    int y;
    cout<<"Please enter the information of all cars\n";
    for(int i;i<4;i++){
        cout<<"Please enter the Year of Manufacturing for car\n";
        cin>>c[i].ManufacturingYear;
        cout<<"Please enter the cylinder\n";
        cin>>c[i].cylinders;
        cout<<"please enter the plate number\n";
        cin>>c[i].PlateNumber;
    }
    cout<<"Please enter a palte number\n";
    cin>>y;
    cout<<c[index(c,y)].ManufacturingYear<<"-"<<c[index(c,y)].cylinders<<"-"<<c[index(c,y)].PlateNumber<<endl;

    return 0;
}