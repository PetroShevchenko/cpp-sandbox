#include <iostream>
using namespace std;

struct Animal
{
    virtual void say() = 0; // say something
    virtual ~Animal()
    {}
};

struct Cat:public Animal
{
    void say()
    {
        cout << "Meow!\n";
    }
};

struct Dog: public Animal
{
    void say()        
    {
        cout << "Wow!\n";
    }
};

int main()
{
    Animal *p;
    int kind;

    cout << "Who do you want to hear? Dog (1) or Cat (2):";
    cin >>  kind;
    if (kind == 1)
    {
        p = new Dog();
    }
    else {
        p = new Cat();
    }
    p->say();

    delete p;
}
