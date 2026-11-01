#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;
public:
// Default constructor
    student(int r, string n)
    {
        roll_no=r;
        name=n;
        cout<<"Student object created"<<endl;
    } 
    //Member function
    void display()
    {
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
    }
    // Destructor
    ~student()
    {
        cout<<"Student object destroyed"<<endl;
    }
};

int main()
{
    student s1(101, "Evan");
    s1.display();
    return 0;
}