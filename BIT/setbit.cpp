#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main()
{
    printBinary(9);
    int a = 9;
    int i = 3;
    if ((a & (1 << i)) != 0)
    {
        cout << "Set bit"<<endl;
    }
    else
        cout << "Not set bit"<<endl;
    printBinary(a | (1 << 1));
    printBinary(a&(~(1<<i)));
    return 0;
}