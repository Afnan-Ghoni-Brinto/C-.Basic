#include <iostream>
using namespace std;
int main()
{ int row,col;
cout<<"Give me the row number : ";
cin>>row;
cout<<"Give me the column number : ";
cin>>col;
int mat[row][col];
cout<<"Enter the matrix element "<<endl;
cout<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"Element("<<i+1<<","<<j+1<<")= ";
        cin>>mat[i][j];}}
cout<<endl;
cout<<"The matriix is :"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<mat[i][j]<<"\t";}
        cout<<endl;}
cout<<"\nThe trans matrix is : "<<endl;
int trans[col][row];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        trans[j][i]=mat[i][j];
    }}

for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
        cout<<trans[i][j]<<"\t";
    }cout<<endl;
}
    return 0;
}
