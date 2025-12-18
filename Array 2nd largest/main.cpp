#include <iostream>
#include <vector>
using namespace std;
int main(){
int s;
int big=INT_MIN;
int s_big=INT_MIN;
cout<<"Give me the SIZE of array: ";
cin>>s;
vector<int>arr(s);
cout<<"Enter the numbers: "<<endl;
for(int i=0;i<s;i++){
    cin>>arr[i];}
for(int i=0;i<s;i++){
    if(arr[i]>big)
        big=arr[i];}
for(int i=0;i<s;i++){
    if(arr[i]>s_big && arr[i]!=big)
        s_big=arr[i];}
cout<<"The 2nd largest number is : " <<s_big<<endl;
    return 0;
}
