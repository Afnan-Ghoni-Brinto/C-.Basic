#include <iostream>
using namespace std;
class emotion{
public:
    string a;
    string b;
    string c;
void student (){
    cout<<"How are you ?"<<endl;
getline(cin,a);
cout<<"How is your day going ?"<<endl;
getline(cin,b);
cout<<"You are ";
cout<<a<<endl;
cout<<"And your day is going ";
cout<<b<<endl;
cout<<"Good to know "<<endl;
}
};
int main()
{
    emotion h1;
    h1.student();
}
