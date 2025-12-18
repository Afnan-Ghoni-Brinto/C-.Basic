#include <iostream>

using namespace std;

int main()
{
    int a[5]={2,4,6,8,10};
    int *p=a;
    int *q=&a[3];
    cout<<*p<<endl;
    cout<<p<<endl;
    p++;
    cout<<*p<<endl;
    cout<<p<<endl;
    p--;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<endl;
    cout <<q-p  << endl;
    return 0;
}
