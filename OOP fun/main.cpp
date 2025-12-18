#include <iostream>
using namespace std;
class math{
public:
    string a;string b;char c;char d;
    void value(string x,string y,char z,char i){
        a=x;b=y;c=z;d=i;
    cout<<"How many number do you have ?"<<endl;
    int number;
    cin>>number;
    if(number==2){
        cout<<"Give me the first value "<<endl;
        cin>>a;
        cout<<"NOW 2nd do it you idiot "<<endl;
        cin>>b;
        cout<<"GIVE me the operator "<<endl;
        cin>>c;
        switch(c){
        case '+':
            cout<<"Here is your ans : "<<a+b<<endl;
        case '-':
            cout<<"Here is your ans : "<<a-b<<endl;

        case '/':
        cout<<"Here is your ans : "<<a/b<<endl;

        case '*':
            cout<<"Here is your ans : "<<a*b<<endl;
        default:
            cout<<"Wrong op "<<endl;

        }
    }
    else if (number==3){
        cout<<"Give me the first value "<<endl;
        cin>>a;
        cout<<"NOW 2nd do it you idiot "<<endl;
        cin>>b;
        cout<<"GIVE me the 3rd value "<<endl;
        cin>>c;
        cout<<"Give me the op "<<endl;
        cin>>d;
        switch(d){
        case '+':
            cout<<"Here is your ans :"<<x+y+z<<endl;
        case '-':
            cout<<"Here is your ans : "<<x-y-z<<endl;

        case '/':
        cout<<"Here is your ans : "<<x/y/z<<endl;

        case '*':
            cout<<"Here is your ans : "<<x*y*z<<endl;
         default:
            cout<<"Wrong op "<<endl;
        }
    }
    else{
        cout<<"Do by yourself kid (-_-)"<<endl;
    }}};
int main()
{  math h1;
h1.value("a","b",'c','d');

    return 0;
}
