#include <iostream>
using namespace std;

int sum(int  a, int b)
{
    cout << "\nint sum(int a, int b)\n";
    return a + b;
}

double sum(double a, double b)
{
    cout << "\ndouble sum(double a, double b)\n";
    return a + b;
}

int main(void)
{
    double a, b;
    cout << "Enter the first value a:";
    cin >> a;
    cout << "Enter the second value b:";
    cin >> b;

    cout << "sum of two double values a + b:" << sum(a,b) << "\n";
    cout << "sum of two integer values a + b:" << sum((int)a,(int)b) << "\n";
    
    return 0;
}

