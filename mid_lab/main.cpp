#include <iostream>
using namespace std;
int main()
{int num_c,num_of_attended,percent;
cout<<"Give me the number of classes held : ";
cin>>num_c;
cout<<"\nGive me the number of classes that were attended by the student : "<<endl;
cin>>num_of_attended;
percent=((num_c/100)*num_of_attended);
if(percent>=80){
    cout<<"\nThe student will be allowed to sit in the exam hall "<<endl;
}
else
{
    cout<<"\nThe student will not be allowed to sit in the exam hall "<<endl;
}
cout<<percent<<"%"<<endl;
    return 0;
}
