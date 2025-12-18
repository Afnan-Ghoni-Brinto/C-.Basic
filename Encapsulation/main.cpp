


/*
#include<iostream>
using namespace std;
class add{
public:
    void addnum(int num){
    total=total+num;
    }
    int gettotal(){
    return total;}
private:
    int total=2;
};
int main(){
add hi;
hi.addnum(10);
hi.addnum(20);
cout<<"Then :"<<hi.gettotal();
return 0;
}
*/
/*
#include<iostream>
using namespace std;
class square{
private:
    int num;
public:
    void get(){
    cout<<"Give me the number:"<<endl;
    cin>>num;
    }
    void display(){
    cout<<"Square is : "<<num*num<<endl;
    }
};
int main(){
square obj;
obj.get();
obj.display();
return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Person {
private:
    // Private member variables (data)
    string name;
    int age;

public:

    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Public method to get the name (Getter)
    string getName() {
        return name;
    }

    // Public method to get the age (Getter)
    int getAge() {
        return age;
    }

    // Public method to set the name (Setter)
    void setName(string n) {
        name = n;
    }

    // Public method to set the age (Setter)
    void setAge(int a) {
        if (a > 0) {  // Validation to ensure the age is positive
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Public method to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating an object of the Person class
    Person person1("John", 25);

    // Accessing data through public methods (encapsulation in action)
    cout << "Initial Info:" << endl;
    person1.displayInfo();

    // Modifying private members using setter methods
    person1.setName("Mike");
    person1.setAge(30);


    // Display updated information
    cout << "Updated Info:" << endl;
    person1.displayInfo();

    // Trying to set an invalid age
    person1.setAge(-5);  // This will trigger the validation and print "Invalid age!"

    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;            }
    // Public method to get the name (Getter)
    string getName() {
        return name;
                     }
    // Public method to get the age (Getter)
    int getAge() {
        return age;
                 }
    // Public method to set the name (Setter)
    void setName(string n) {
        name = n;
    }

    // Public method to set the age (Setter)
    void setAge(int a) {
        if (a > 0) {  // Validation to ensure the age is positive
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Public method to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// A Derived class that inherits from Person
class Employee : public Person {
private:
    string employeeID;

public:
    // Constructor for Employee
    Employee(string n, int a, string id) : Person(n, a) {
        employeeID = id;
    }
    // Method to display employee details
    void displayEmployeeInfo() {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;  // Accessing protected member
        cout << "Age: " << age << endl;    // Accessing protected member
        cout << "Employee ID: " << employeeID << endl;
    }
};
int main() {
    Employee emp1("Alice", 28, "EMP123");
    emp1.displayEmployeeInfo();
    emp1.setName("Bob");
    emp1.setAge(35);
    cout << "\nUpdated Info:" << endl;
    emp1.displayEmployeeInfo();
    return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;

public:
void displayInfo()  {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

Person(string personName, int personAge) {
        name = personName;
        age = personAge;
cout << "Constructor called: Person object created!" << endl;
                                         }
    void setName(string personName) {
        name = personName;          }

    void setAge(int personAge) {
        if (personAge >= 0) {
            age = personAge;
        } else {
            cout << "Invalid age!" << endl;}
                               }

    string getName()  {
        return name;  }

    int getAge()   {
    return age;
    }
    ~Person() {
cout << "Destructor called: Person object destroyed!" << endl;
              }
};
int main() {
    Person person1("Alice", 25);
    person1.displayInfo();
    person1.setName("Bob");
    person1.setAge(30);
    person1.displayInfo();
    person1.setAge(-5);
    return 0;
}
*/



