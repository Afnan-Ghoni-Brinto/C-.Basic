#include <iostream>
#include <vector>
using namespace std;
int main() {
int s;
int big=0;
cout<<"Give me the size"<<endl;
cin>>s;
vector<int>arr(s);
cout<<"Enter the number "<<endl;
for(int i=0;i<s;i++){
    cin>>arr[i];
}
cout<<"The numbers are  ";
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<s;i++){
    if(arr[i]>big)
    big=arr[i];
}
 cout<<"The biggest number is "<< big<<endl;
    return 0;
}
