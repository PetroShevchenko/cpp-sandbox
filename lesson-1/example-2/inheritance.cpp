#include <iostream>
using namespace std;

struct BaseClass
{
    BaseClass(): a{1}, b{2}, c{3}
    {}
public:
    int a;
protected:
    int b;
private:
    int c;
};

struct PublicInheritedClass: public BaseClass
{
    int b()
    { return BaseClass::b; }
};

struct ProtectedInheritedClass: protected BaseClass
{
    int a()
    { return BaseClass::a; }
    int b()
    { return BaseClass::b; }
};

struct  PrivateInheritedClass1: private ProtectedInheritedClass
{
    int a()
    { return ProtectedInheritedClass::a(); }
    int b()
    { return ProtectedInheritedClass::b(); }
};

struct PrivateInheritedClass2: private BaseClass
{
    int a()
    { return BaseClass::a; }
    int b()
    { return BaseClass::b; }
};

int main()
{
    PublicInheritedClass      obj1;
    ProtectedInheritedClass   obj2;
    PrivateInheritedClass1    obj3;
    PrivateInheritedClass1    obj4;

    cout << "obj1.a =" << obj1.a << "\n";
    cout << "obj1.b() =" << obj1.b() << "\n";
    cout << "obj1.c is not inherited\n";

    cout << "obj2.a() =" << obj2.a() << "\n";
    cout << "obj2.b() =" << obj2.b() << "\n";
    cout << "obj2.c is not inherited\n";

    cout << "obj3.a() =" << obj3.a() << "\n";
    cout << "obj3.b() =" << obj3.b() << "\n";
    cout << "obj3.c is not inherited\n";

    cout << "obj4.a() =" << obj4.a() << "\n";
    cout << "obj4.b() =" << obj4.b() << "\n";
    cout << "obj4.c is not inherited\n";

    return 0;
}

