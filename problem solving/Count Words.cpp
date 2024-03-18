    #include <iostream>
    #include<string>
    using namespace std;
    

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string x;
        int cnt=0;
        getline(cin,x); 
        for(int  i=0;i<=x.length();i++)
        if(x[i]==' '||x[i]=='!'||x[i]=='.'||x[i]=='?'||x[i]==',')
        cnt++;

    cout<<cnt+1;
    }