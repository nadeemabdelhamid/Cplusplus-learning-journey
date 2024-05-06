#include<iostream>
using namespace std;
class numbers{
private:
int number;
string lessthan20[20]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[10]={"twenty","thirty","forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string hundred="hundred";
    string thousand="thousand";
    public:
    numbers(int n){
        number=n;
    }
     string convertHundreds(int num) {
        string x;
        if (num % 100 == 0)
            x = lessthan20[(num / 100)] + " " + hundred;
        else {
            x = lessthan20[(num / 100)] + " " + hundred + " ";
            if ((num % 100) < 20)
                x += lessthan20[(num % 100)];
            else
                x += tens[((num % 100) / 10) - 2] + " " + lessthan20[num % 10];
        }
        return x;
    }
    string convertTens(int number){
        string x;
if(number <20)
       x=lessthan20[number];
         if (number>=20 &&number<100){
            if(number%10==0)
            x=tens[(number/10)-2];
            else{
                x=tens[(number/10)-2]+ " "+lessthan20[(number%10)]+" ";
 


            }}
    return x;
    }
    void printnumber(){
        string x="";
       if(number>0&&number<100)
       x=convertTens(number);
        if (number >= 100 && number < 1000) {
            x=convertHundreds(number);
    }

         
         if (number >= 1000) {
            if(number%1000==0)
           x += lessthan20[number / 1000] + " " + thousand + " ";
        else{
           x += lessthan20[number / 1000] + " " + thousand + " ";
        number %= 1000;
         x += convertHundreds(number);

        }
        

        }
    cout<<x;
      


    }
    };



int main(){
   

    int n;
    cout<<"enter number as integer value : ";
    cin>>n;
    if(n<0||n>9999)
    return 0;
   else{
numbers x(n);

x.printnumber();

}
    }


