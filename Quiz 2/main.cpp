#include <iostream>
#include<vector>
using namespace std;
int main()
{int i,s;
cout<<"Give me the size of the array: ";
cin>>s;
vector<int>arr(s);
cout<<"Give me "<<s<<" values"<<endl;
for(i=0;i<s;i++){
    cin>>arr[i];}
    cout<<"The even numbers are : ";
for(i=0;i<s;i++){
    if(arr[i]%2==0){
cout<<arr[i]<<" ";}
}
cout<<"\nThe odd numbers are : ";
for(i=0;i<s;i++){
        if(arr[i]%2!=0){
    cout<<arr[i]<<" ";}}
    return 0;}
