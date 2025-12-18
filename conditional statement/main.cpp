#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Give me three numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the biggest number"<<endl;
        }
        else{
            cout<<c<<" is the biggest number"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" is the biggest number " <<endl;
        }
        else{
            cout<<c<< " is the biggest number "<<endl;
        }
    }
    return 0;
}
