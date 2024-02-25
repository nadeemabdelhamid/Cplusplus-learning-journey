#include<iostream>
using namespace std;
int main(){
    int result=0;
    string romanVal;
    bool err=true;
cout<<"enter roman val(in capital char only)"<<endl;
cin>>romanVal;
for(int i=0;i<romanVal.length();i++){
switch(romanVal[i]){
case 'I':
if(i>=0&&romanVal[i+1]=='V'){
    result+=4;
    i++;

}
else if(i>=0&&romanVal[i+1]=='X'){
    result+=9;
    i++;
}
else 
result+=1;
break;
case 'V':
result+=5;
break;
case 'X':
if(i>=0&&romanVal[i+1]=='L'){
    result+=40;
    i++;
}
else if(i>=0&&romanVal[i+1]=='C'){
    result+=90;
    i++;
}
else 
result+=10;
break;
case 'L':
result+=50;
break;
case 'C':
if(i>=0&&romanVal[i+1]=='M'){
    result+=900;
    i++;
 
}
else if(i>0&&romanVal[i+1]=='D'){
    result+=400;
    i++;
}
else {
    
result+=100;
}

//M = 1000, CM = 900, XC = 90 and IV = 4. 
break;
case 'D':
result+=500;
break;
case 'M':
result+=1000;
break;
default :
err=false;




}






}
if (!err)
cout<<"invalid character in input\n";
else
cout<<"result in integer  is "<<result<<endl;

}