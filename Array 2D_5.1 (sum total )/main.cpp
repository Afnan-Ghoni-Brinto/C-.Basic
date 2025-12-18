#include <iostream>
using namespace std;
int main()
{int row,col;
cout<<"Enter the row and column : ";
cin>>row>>col;
cout<<"\nEnter the elements : ";
int mat[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>mat[i][j];
    }
}
cout<<"\nThe matrix is "<<endl;
for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<"\t";
        }cout<<endl;
}
int sum=0;
cout<<"\nThe sum of the matrix elements is : ";
for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                sum=sum+mat[i][j];
        }
}
cout<<sum;
    return 0;
}
