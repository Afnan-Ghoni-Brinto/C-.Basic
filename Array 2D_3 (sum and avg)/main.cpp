#include <iostream>
using namespace std;
int main()
{int stu=5,sub=4;
int mat[stu][sub];
for(int i=0;i<stu;i++){
    for(int j=0;j<sub;j++){
            cout<<"Score("<<i+1<<","<<j+1<<")=";
        cin>>mat[i][j];}}
cout<<"\nThe numbers are :"<<endl;
for(int i=0;i<stu;i++){
    for(int j=0;j<sub;j++){
        cout<<mat[i][j]<<"\t";}
    cout<<endl;}
for(int i=0;i<stu;i++){
        int sum=0;
        double avg=0;
    for(int j=0;j<sub;j++){
        sum=sum+mat[i][j];
        avg=(double)sum/sub;
    }
    cout<<"\nThe sum of "<<i+1<<" Row is : "<<sum<<endl;
    cout<<"\nThe avg of "<<i+1<<" student is :"<<avg<<endl;
}
return 0;
}
