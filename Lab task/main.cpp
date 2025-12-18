#include <iostream>
using namespace std;
class Animal {
public:
    string name;
    string sound;
    void displayDetails() {
        name = "Dog";
        sound = "bhaw bhaw !!!!!!!!!";
        cout << "               The Animal is " << name << endl;
        cout << "          And it makes sounds like " << sound << endl;
        cout<<"\n\n           Now lets talk about a specific Dog   \n\n"<<endl;
    }
};
class Dog : public Animal {
public:
    string name1;
    string breed1;
    void displayDogDetails(string a, string b, string c) {
        name1 = a;
        breed1 = b;
        sound = c;
        cout << "              The dog's name is " << name1 << endl;
        cout << "              And its breed is " << breed1 << endl;
        cout << "              At last sound is " << sound << endl;
    }
};

int main() {
    Dog a1;
    a1.displayDetails();
    a1.displayDogDetails("Husky", "Siberian", "BHAW BHAW !!!!");

    return 0;
}
