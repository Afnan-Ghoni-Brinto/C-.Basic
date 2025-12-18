#include <iostream>
using namespace std;
int main(){
int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};//rows=4 and colum =3
int rows=4;
int colums=3;
for(int i=0;i<rows;i++){
    for(int j=0;j<colums;j++){
        cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
}
    return 0;
}
