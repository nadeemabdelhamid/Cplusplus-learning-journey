#include<iostream>
#include<algorithm>
using namespace std;
int linearSearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
if(arr[i]==key)
return i;




}
return -1;






}


int binarySearch(int arr[],int start ,int end,int key){
while(start<=end){
 int mid = (start + end) / 2;
if(arr[mid]==key)
return mid;
else if(arr[mid]<key)
start=mid+1;
else
end=mid-1;






}
return -1;





}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);  //assure that the array is sorted before binary search
    int key;
    cin>>key;
    int linearResult=linearSearch(arr,n,key);
    int binaryResult = binarySearch(arr, 0, n - 1, key);

  
 if(linearResult==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at index "<<linearResult<<endl;
    if(binaryResult==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at index "<<binaryResult<<endl;


}