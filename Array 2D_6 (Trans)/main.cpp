#include <iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the row and cols of a square matrix :"<<endl;
    cin>>n;
    int mat[n][n];
    cout<<"Enter the elements : "<<endl ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<"Elements("<<i+1<<","<<j+1<<")=";
            cin>>mat[i][j];}}
    cout<<"\nThe elements are : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<"\t";}
            cout<<endl;}
    cout<<"\nThe trans matrix is : "<<endl;
int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;}}
  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
     cout<<mat[i][j]<<"\t";}
     cout<<endl;}
    return 0;
}
