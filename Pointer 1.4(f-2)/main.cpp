#include <iostream>

using namespace std;
int maxi(int x,int y){
return x>y? x:y;
}
int mini(int x,int y){
return x<y?x:y;
}
int main()
{
    int (*fp)(int,int);
    fp=maxi;
    (*fp)(10,5);
    fp=mini;
    (*fp)(10,5);

}
