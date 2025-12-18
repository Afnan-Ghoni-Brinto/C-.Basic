#include<iostream>
using namespace std;
int main(){
float price,discount,dis_price,after_dis_price;
cout<<"What is the price : " <<endl;
cin>>price;
cout<<"What is the discount : "<<endl;
cin>>discount;
dis_price=(discount/100)*price;
after_dis_price=price-dis_price;
cout<<"The after price discount is : "<<after_dis_price<<endl;

return 0;
}
