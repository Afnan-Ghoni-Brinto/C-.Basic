/*
#include <iostream>
using namespace std;
int main ()
{
int u, v, temp;
cout<<"Please type in two nonnegative integers."<<endl;
cin>>u>>v;
while ( v != 0 ) {
temp = u % v;
u = v;
v = temp;
}
cout<<"Their greatest common divisor is "<< u;
return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;}
    cout << "GCD is: " << num1 << endl;
    return 0;
}
