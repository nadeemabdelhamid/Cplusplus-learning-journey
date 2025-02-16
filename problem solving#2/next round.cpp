#include<iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    int x;
    int sum=0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        }
        x=arr[k-1];

        for(int i = 0; i < n; i++) {
            if(arr[i] >= x&&arr[i]!=0) {
                sum++;
            }

            
            
            
            
            
            
            
            
            
            
            
        }
        cout<<sum;
    }