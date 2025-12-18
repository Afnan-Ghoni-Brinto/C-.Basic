#include <iostream>
using namespace std;
int main()
{int row,colum;
cout<<"Enter Row :";
cin>>row;
cout<<"Enter Colum :";
cin>>colum;
int mat[row][colum];
for(int i=0;i<row;i++){
    for(int j=0;j<colum;j++){
            cout<<"Elements("<<i+1<<","<<j+1<<")=";
        cin>>mat[i][j];}}
cout<<"\nThe elements are :"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<colum;j++){
        cout<<mat[i][j]<<"\t";}
    cout<<endl;}
return 0;
}
