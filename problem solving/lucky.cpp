    #include<iostream>
    using namespace std;
    int main(){
    int n;
    int minIndex,cnt=0;
    cin>>n;
    int  a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
    if(i==0)
    minIndex=i;
    if(a[i]<=a[minIndex])
    minIndex=i;


    }
    for(int i=0;i<n;i++){
    
    if(a[minIndex]==a[i])
    cnt++;



    }
    if(cnt%2!=0)
    cout<<"Lucky\n";
    else
    cout<<"Unlucky\n";




    }