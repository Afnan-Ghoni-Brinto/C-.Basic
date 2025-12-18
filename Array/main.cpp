#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Give me the value of The end : ";
cin>>n;
int arr[n];
int sum=0;
for(int i=0;i<n;i++){
    arr[i]=i+1;
}
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        sum=sum+arr[i];
    }
}
cout<<"THe sum is :  "<<sum<<endl;
if(sum%2==0){
    cout<<"The sum "<<sum<<" is even "<<endl;
}
else {
    cout<<"The sum "<<sum <<" is odd "<<endl;
}
return 0;
}
