    #include <iostream>
    #include<string>
    using namespace std;

    int main() {
      ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
      
    int tk;
    cin>>tk;
    string x;
    while(tk--){
        cin>>x;
    if(x.length()>10)
    cout<<x[0]<<x.length()-2<<x[x.length()-1]<<'\n';
    else 
    cout<<x<<'\n';


    }
      
    }