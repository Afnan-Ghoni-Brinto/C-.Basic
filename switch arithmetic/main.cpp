#include <iostream>
using namespace std;
int main()
{
    float a,b,result;
    char op;
    cout << "Give me the value of A and B : ";
    cin>>a>>b;
    cout<<"\nGive me the operator : ";
    cin>>op;
    switch(op){
case '+':
    cout<<"\nThe sum is : "<<a+b<<endl;
    break;
case '-':
    cout<<"\nThe sub is : "<<a-b<<endl;
    break;
case '*':
    cout<<"\nThe multi is : "<<a*b<<endl;
    break;
case '/':
    cout<<"\nThe div is : "<<a/b<<endl;
    break;
default :
    cout<<"\nThe operator is invalid "<<endl;
    break;
    }
    return 0;
}
