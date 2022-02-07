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
{ //odd even-------------------------------------------
    // for (int i = 0; i < 8; i++)
    // {
    //     printBinary(i);
    //     if (i & 1)
    //     {
    //         cout << "Odd" << endl;
    //     }
    //     else
    //         cout << "Even" << endl;
    // }

    //Divide and multiply by 2--------------------------
    int n = 5;
    cout << (n >> 1) << endl; //to divide with 2
    cout << (n << 1) << endl; //To multiply with 2
    //101
    //10
    //1010

    //Uppercase lowercase-----------------------------
    for (char i = 'A'; i <= 'E'; i++)
    {
        cout << i << endl;
        printBinary(i);
    }
    for (char i = 'a'; i <= 'e'; i++)
    {
        cout << i << endl;
        printBinary(i);
    }

    return 0;
}