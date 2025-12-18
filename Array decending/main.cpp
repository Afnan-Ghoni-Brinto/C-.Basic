#include <iostream>
#include<vector>
using namespace std;
int main()
{   int s;
    cout<<"Give me the size : ";
    cin>>s;
    vector<int>arr(s);
    cout<<"\nEnter  "<<s<<" values  :";
for(int i=0;i<s;i++){
    cin>>arr[i];}
for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
        if(arr[i]<arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }}}
for(int i=0;i<s;i++){
    cout<<"\nThe descending numbers are : "<<arr[i]<<" ";
}
    return 0;
}
