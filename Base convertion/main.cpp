#include <iostream>
using namespace std;
int main (){
char baseD[16] = {
'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
int convertedNumber[64];
int numberToConvert;
int nextDigit, base, index = 0;
cout<<"Number to be converted? "<<endl;
cin>>numberToConvert;
cout<<"Base? "<<endl;
cin>>base;
do {
	convertedNumber[index] = numberToConvert % base;
	index=index +1;
	numberToConvert = numberToConvert / base;
}
while ( numberToConvert != 0 );
cout<<"Converted number = ";
for (index=index-1; index >= 0; --index )
    {
	nextDigit = convertedNumber[index];
	cout<<baseD[nextDigit];
	}
return 0;
}

