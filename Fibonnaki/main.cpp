
#include <iostream>
using namespace std;
int main()
{   int n;
cout<<"Give me the ending point : "<<endl;
cin>>n;
int f[n],i;
f[0]=0;
f[1]=1;
for(i=2;i<=n;i++){
    f[i]=f[i-2]+f[i-1];}
for(i=0;i<=n;i++){
    cout<<"f["<<i<<"] = "<<f[i]<<endl;}
    return 0;
}
/*
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Give me the value of N : "<<endl;
    cin>>n;
int Fibonacci[n], i;
Fibonacci[0] = 0;
Fibonacci[1] = 1;
for ( i = 2; i <n; ++i ){
	Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];}
for ( i = 0; i < n; ++i )
	{cout<< "Fibonacci["<<i<<"]="<<Fibonacci[i]<<endl;}
return 0;
}*/

