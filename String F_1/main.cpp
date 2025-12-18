#include <iostream>
#include <string.h>
using namespace std;
int main() {
char a[]="Hello";
char b[]="brinto";
char n;
cout<<strlen(a)<<endl;
cout<<strcat(a,b)<<endl;
cout<<strcmp(a,b)<<endl;
cout<<strcpy(a,b)<<endl;
cout<<strncat(a,b,n)<<endl;
    return 0;
}
