#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
class set
{
    int m, n;

public:
    void input(void);
    void display(void);
    int largest(void);
};
void set::input(void)
{
    cout << "Enter value of m" << endl;
    cin >> m;
    cout << "Enter value of n" << endl;
    cin >> n;
}
int set::largest(void)
{
    if (m >= n)
        return m;
    else
        return n;
}
void set::display(void)
{
    cout << "Largest = " << largest() << endl;
}
int main()
{
    set A;
    A.input();
    A.display();
    return 0;
}