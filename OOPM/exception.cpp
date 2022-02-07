#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome" << endl;
    try
    {
        throw 10;
        cout << "In Try";
    }
    catch (int e)

    {
        cout << "Exception : " << e << endl;
    }
    cout << "Last line";
    return 0;
}