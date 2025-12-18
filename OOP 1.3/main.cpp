#include <iostream>
using namespace std;
class students{
public:
    string id;
    string name;
    int age;
void values(string a,string b,int c){
id=a;
name=b;
age=c;
}
void show(){
cout<<"id : "<<id<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Age : "<<age<<endl;
}
};
int main()
{
   students r1,r2;
   r1.values ("24-60363-3","Afnan",20);
   r1.show();
}
