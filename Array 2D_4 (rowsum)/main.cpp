#include <iostream>
using namespace std;
int main()
{ int mat[3][3]={{1,2,3},{4,50,6},{7,8,9}};
int big=0;
for(int i=0;i<3;i++)
    {
        int rowsum=0;
        for(int j=0;j<3;j++){
        rowsum=rowsum+mat[i][j];
                            }
           if(rowsum>big){
              big=rowsum;}
    }
cout<<big<<endl;
return 0;
}
