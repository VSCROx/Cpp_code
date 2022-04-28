#include <iostream>
#include <cmath>
using namespace std;

class simpleCalc
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of a: " << endl;
        cin >> b;
    }
    void performOperationSimp()
    {
        cout << "The value of a+b: " << a + b << endl;
        cout << "The value of a-b: " << a - b << endl;
        cout << "The value of a*b: " << a * b << endl;
        cout << "The value of a/b: " << a / b << endl;
    }
};

class scientificCalc
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of a: " << endl;
        cin >> b;
    }
    void performOperationScie()
    {
        cout << "The value of cos(a): " << cos(a) << endl;
        cout << "The value of tan(b): " << tan(b) << endl;
        cout << "The value of log(a): " << log(a) << endl;
        cout << "The value of exp(a): " << exp(a) << endl;
    }
};
// Multiple Inheritance
class HybridCalc : public simpleCalc, public scientificCalc
{
};
int main()
{
    // simpleCalc c;
    // c.getDataSimple();
    // c.performOperationSimp();
    // scientificCalc q;
    // q.getDataScientific();
    // q.performOperationScie();
    HybridCalc o;
    o.getDataScientific();
    o.performOperationScie();

    o.getDataSimple();
    o.performOperationSimp();
    return 0;
}