1) //  Object as a Class member
#include <iostream>
using namespace std;
class Address {
    string city;
public:
    Address(string c) { city = c; }
    void show() { cout << "City: " << city << endl; }
};
class Student {
    string name;
    Address addr;   // Object as a class member
public:
    Student(string n, string c) : name(n), addr(c) {}
    void display() {
        cout << "Name: " << name << endl;
        addr.show();
    }
};
int main() {
    Student s("Ravi", "Hyderabad");
    s.display();
    return 0;
}
OUTPUT:
 
2) // Demonstration :: Pointer to a Class
#include <iostream>
using namespace std;
class Box 
{
    int length;
public:
    void setLength(int l) { length = l; }
    void showLength() { cout << "Length: " << length << endl; }
};
int main() {
    Box b1;
    Box *ptr = &b1;   // Pointer to object
    ptr->setLength(15);
    ptr->showLength();
    return 0;
}
