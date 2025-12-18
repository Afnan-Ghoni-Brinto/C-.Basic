#include <iostream>
using namespace std;
int main()
{  int x;
cout<<"Enter the size of 1st matrix : ";
cin>>x;
int y=x;
int mat[x][y];
cout<<" \n Enter the elements "<<endl;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
            cout<<"Enter ("<<i+1<<","<<j+1<<")=";
        cin>>mat[i][j];
    }
} cout<<"\nThe 1st matrix is: "<<endl;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cout<<mat[i][j]<<"\t";
    }cout<<endl;
}
int mat1[x][y];
cout<<" \nEnter the 2nd matrix "<<endl;;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
            cout<<"Enter ("<<i+1<<","<<j+1<<")=";
        cin>>mat1[i][j];
    }}
cout<<"\nThe 2nd matrix is: "<<endl;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cout<<mat1[i][j]<<"\t";
    }cout<<endl;
}
int mat2[x][y];
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        mat2[i][j]=0;
        for(int k=0;k<x;k++){
        mat2[i][j]=mat2[i][j]+(mat[i][k]*mat1[k][j]);}
    }
}
cout<<"\nThe multi of 1 and 2 is  "<<endl;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cout<<mat2[i][j]<<"\t";
    }cout<<endl;
}

    return 0;
}
