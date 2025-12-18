#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Give me the number : "<< endl;
cin >>a;
if(a%2==0){
    cout<<"The number  "<<a<<" is even "<<endl;
}
else{
    cout<<"The number  "<<a<<" is odd "<<endl;
}
if(a>=1){
    cout<<"The number  " <<a<<" is not a prime number "<<endl;
}
else if (a==2|| a==3 || a==5||a==7){
    cout<<"The number  "<<a<<" is a prime number " <<endl;
}
else if (a%2==0 || a%3==0 || a%5==0|| a%7==0){
    cout<<"The number  "<<a<<" is a not a prime number "<<endl;
}
else {
    cout<<"The number " <<a<<" is a prime number " <<endl;
}
return 0;
}
