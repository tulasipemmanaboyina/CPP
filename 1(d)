#include <iostream>
using namespace std;
class Student 
{
	private:				// it is the default access specifier
    	int sno;         	// Private: accessible only inside the class
	protected:
    	string sgrade;       // Protected: accessible in derived classes
	public:
    	string sname;        // Public: accessible from outside
    // Constructor
    Student(int sn, string sna, string sg) 
	{
        sno = sn;
        sname = sna;
        sgrade = sg;
    }
    // Function with default arguments
    void disp(string sgrade = "Pass") 
	{
        cout << " Name: " << sname << endl;
        cout << "Roll Number: " << sno << endl;
        cout << "Grade: " << sgrade << endl;
    }
};
int main() 
{
    Student s1(100, "Tulasi", "A+");  // Creating object
    cout << "Name of the Student ="<< s1.sname << endl;  // accessing public variable
    s1.disp();    
	s1.disp("Distinction");
    s1.disp();    
    return 0;
}
