#include <iostream>

using namespace std;
void swap(int *px, int *py)
{
int temp;
temp = *px;
*px = *py;
*py = temp;
cout<<"After swap "<<endl;
cout<<*px<<endl;
cout<<px<<endl;
cout<<*py<<endl;
cout<<py<<endl;
}

int main()
{
    int a=3, b=5;
    cout<<"Real a is : "<<a<<"  and b is  :"<<b<<endl;
    cout<<" A add :  "<<&a<<endl;
    cout<<" B add :  "<<&b<<endl;
swap(&a, &b);
    return 0;
}
