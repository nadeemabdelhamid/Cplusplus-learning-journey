#include<bits/stdc++.h>


using namespace std;
   float calcArea(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4){
return abs((x1-x2)*(y1-y3));



   }
   bool compare(vector<float> &r1,vector <float> &r2){
return calcArea(r1[0],r1[1],r1[2],r1[3],r1[4],r1[5],r1[6],r1[7])>calcArea(r2[0],r2[1],r2[2],r2[3],r2[4],r2[5],r2[6],r2[7]);




   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    float area;
   vector <vector<float>> x(n,vector<float>(8));

   for(int i=0;i<n;i++)
   for(int j=0;j<8;j++)  
       cin >> x[i][j]; 

sort(x.begin(),x.end(),compare);

   for(auto x:x){
   for(auto x:x)  
       cout << x<<" "; 
       cout<<endl;


   }




   
}