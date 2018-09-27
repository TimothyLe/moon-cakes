#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string speak() { return "Shhh!"; }
};

class Mammal : public Animal
{
public:
    string speak() { return "Grrr!" ; }
};

class Cat : public Mammal
{
public:
    string speak() { return "Roar!"; }
};

class Kitty : public Cat
{
public:
    string speak() { return "Meow!"; }
};

string speak(Cat& c) { return c.speak(); }

int main()
{
    Kitty k;
    cout << speak(k) << endl;
}
