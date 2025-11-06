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
3) // Demonstration of "this" Pointer
#include <iostream>
using namespace std;
class Test {
    int x;
public:
    Test(int x) //  local varible is X , argument also X so, this pointer will be used
	{
        this->x = x; // Resolving ambiguity
    }
    void show() { cout << "Value of x: " << this->x << endl; }
};
int main() {
    Test t(50);
    t.show();
    return 0;
}
4) // Demonstrtion of Virtual Base Class
#include <iostream>
using namespace std;
class Person 
{	public:
    void show() 
	{ cout << "I am a Person" << endl; }
};
class Student : virtual public Person 
{	public:
    void studentInfo() { cout << "I am a Student" << endl; }
};
class Teacher : virtual public Person 
{	public:
    void teacherInfo() { cout << "I am a Teacher" << endl; }
};
class TA : public Student, public Teacher 
{	public:
    void display() 
	{	show(); // Only one copy of Person is inherited
    }
};
int main() {
    TA obj;
    obj.display();
    obj.studentInfo();
    obj.teacherInfo();
    return 0;
}



