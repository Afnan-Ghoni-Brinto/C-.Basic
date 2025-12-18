#include <iostream>
#include<vector>
using namespace std;
int main(){
    int size;
cout<<"Give me the sixe of the arry "<<endl;
cin>>size;
vector<int>arr(size);
cout<<"Give me the value "<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];}
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }}}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
