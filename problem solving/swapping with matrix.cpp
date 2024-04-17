#include <iostream>
using namespace std;
  void row_matrix(int A[][500],int n,int x,int y){
for(int i=0;i<n;i++)
    swap(A[x-1][i],A[y-1][i]);

  for(int i=0;i<n;i++){
swap(A[i][x-1],A[i][y-1]);


  }



  } 
  void swap(int& x,int& y){
int temp=x;
x=y;
y=temp;



  }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,y;
cin>>n>>x>>y;
int a[500][500];
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];


row_matrix(a,n,x,y);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cout<<a[i][j]<<" ";

}
cout<<'\n';
   
}
}