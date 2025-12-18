#include <iostream>
#include <string.h>
using namespace std;
int main() {
char st1[] = "this is";
char st2[] = "a test";
char st3[20] = "Hello, ";
char st4[] = "world!";
cout<< st3<<endl;
strcat(st3,st4);
cout<<st3<<endl;
if(strcmp(st1,st2) == 0){
	cout<<"strings are equal"<<endl;}
else {cout<<"strings are different"<<endl;}
return 0;
}
