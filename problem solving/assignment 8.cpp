/*case 1:
    cout << "1 Shop Is Open";
    break;
  case 2:
    cout << "2 Shop Is Open";
    break;
  case 3:
    cout << "3 Shop Is Open";
    break;
  case 4:
    cout << "4 Shop Is Closed";
    break;
  case 5:
    cout << "5 Shop Is Closed";
    break;
  default:
    cout << "Day Is Not Valid";
  }

  return 0;
}*/
#include<iostream>
using namespace std;
int main() {
    int day;
    cout<<"enter a day\n";
    cin>>day;
    switch(day){
        case 1:
        case 2:
        case 3:
        cout<<day<<" shop is open";
        break;
        case 4:
        case 5:
        cout<<day<<" shop is closed\n";
        break;
        default:
        cout<<"invalid day\n";
        }


    }
    
    
    
    