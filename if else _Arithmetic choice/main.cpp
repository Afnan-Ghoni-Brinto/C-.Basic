#include <iostream>

using namespace std;

int main()
{
float a,b;
char op;
char ans='y';
cout<<"Give me the numbers :  ";
cin>>a>>b;
cout<<"\nGive me the operator "<<endl;
cin>>op;
if(op=='+'){
    cout<<"The sum is : "<<a+b<<endl;
}
else if (op=='-'){
    cout<<"The sub is : "<<a-b<<endl;
}
else if (op=='*'){
    cout<<"The mylti is : "<<a*b<<endl;
}
else if (op=='/'){
    cout<<"The div is : "<<a/b<<endl;
}
else{
    cout<<"The operator is invalid "<<endl;
}
    return 0;
}
