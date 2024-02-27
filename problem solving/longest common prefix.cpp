#include<iostream>

using namespace std;
int main(){

string strs[3] = {"dog","racecar","car"};

    bool check;
    do{
        for (int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
                    int cnt=0;
             check=false;
            for(int j=0;j<size(strs);j++){
                if(ch==strs[j][i]){
                    cnt++;
                    if(cnt==size(strs)){
                    check=true;
                        cout<<ch;
                    }

                }
                    
            }



        }


    }while(check);

}
