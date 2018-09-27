#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    virtual string activity() { return "Eat and sleep."; }
};

class Student : public Person
{
public:
    string activity() { return "Study and study." ; }
};

class EngineeringMajor : public Student
{
public:
    string activity() { return "Design and build."; }
};

class SoftwareMajor : public EngineeringMajor
{
public:
    string activity() { return "Code and test."; }
};

string activity(Student& s) { return s.activity(); }

int main()
{
    SoftwareMajor sw;
    cout << activity(sw) << endl;
}
