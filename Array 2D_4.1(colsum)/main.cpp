#include <iostream>
using namespace std;
int main()
{ int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{1,2,3}};
int big=0;
for(int i=0;i<4;i++)
    {   int colsum=0;
        for(int j=0;j<3;j++){
        colsum=colsum+mat[j][i];
 }
           if(colsum>big){
              big=colsum;}}
cout<<big<<endl;
return 0;
}
