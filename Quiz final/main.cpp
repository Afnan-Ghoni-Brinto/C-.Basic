#include<iostream>
using namespace std;
/*
void sum()
{
    int a=10;
    int b=20;
    int c=a+b;
    cout<< "the sum is "<<c<<endl;
    return ;
}
 int sub(int d, int e)
 {
     int x= d-e;
     cout<<"the sub is "<<x<<endl;
     return x;
 }
int main()
{
    sum();
    sub(10,5);
    return 0;

}
*/
/*
int main() {
    // Define two 2x2 matrices
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {5, 6},
        {7, 8}
    };

    // Resultant matrix C of size 2x2 initialized to 0
    int C[2][2] = {0};

    // Perform matrix multiplication
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the resulting matrix C
    cout << "Resultant Matrix C:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}
*/
int main(){

    int x,y=10;
    x=5; // 101
    cout<<"Value of X : "<<x<<endl;
    cout<<"Address of X : "<<&x<<endl;
    cout<<"Address of Y : "<<&y<<endl;

    //if we want save address of integer type of data
    //we will need integer type of pointer.

    int *ax = &x;

    int *ay = &y;
    int *p;
    p= NULL; // NULL and 0 is not same thing.

   // int ax;
    cout<<"Address of y : "<<*ax<<endl;
    cout<<"Address of ay : "<<&ay<<endl;
    cout<<"Address of y : "<<*ay<<endl;


   int size;
    cin>>size;
    int *arr = new int [size];//dynamic array declaration
    arr[20] = 20;
    cout<<arr[20]<<endl;

    delete arr;


    return 0;
}

