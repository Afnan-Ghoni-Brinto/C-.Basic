#include <iostream>
#include <string.h>
#define PRAISE " What a super marvelous name!"
using namespace std;
int main(void) {
char name[40];
cout<<"What's your First Name? "<<endl;
cin>>name;
cout<<"Hello "<< name<< PRAISE<<endl;
cout<<"Your name of "<<strlen(name)<<" letters occupies "<<sizeof name<<" memory"<<endl;
return 0;
}
