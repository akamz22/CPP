#include <iostream>
using namespace std;
class item
{
    int number; //private by default
    float cost; //private by default
public:
    void getdata(int a, float b);

    void putdata(void)
    {
        cout << "number : " << number << endl;
        cout << "cost : " << cost << endl;
    }
};
void item ::getdata(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{   
    item x; //create object x
    cout << "\nobject x" << endl;
    x.getdata(100, 299.5); //call member function
    x.putdata();           //call member function

    item y; //create another object y
    cout << "\nobject y:" << endl;
    y.getdata(101, 299.6); //call member function
    y.putdata();           //call member function
    return 0;
}