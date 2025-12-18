#include <iostream>

using namespace std;
int display(){
cout<<"Hello"<<endl;}
int main()
{
    display();
    int(*fp)();
    fp=display;
    cout<<endl;
    (*fp)();
    cout << "Hello world!" << endl;
    return 0;
}
