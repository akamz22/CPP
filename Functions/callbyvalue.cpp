#include <bits/stdc++.h>
using namespace std;
int f1(int, int);
void f2(int &, int &);
void f3(int *, int *);

int f1(int x, int y) //Formal arguments(1.odinary(intx))
{

    x = 18;
    y = 19;
    return x,y;
}

void f2(int &m, int &n) //Formal arguments(3.reference(&))
{
    m = 234;
    n = 134;
}
void f3(int *p, int *q) //Formal arguments(2.pointer(*))
{

    *p = 87;
    *q = 543;
}
int main()

{
    int a = 3, b = 4;
    f1(a, b); //Actual argument
    cout << "a = " << a << "\t\tb = " << b << endl;
    int v = 4, n = 8;
    f2(v, n); //Actual argument
    cout << "v = " << v << "\t\tn = " << n << endl;
    int p = 7, q = 5;
    f3(&p, &q); //Actual argument
    cout << "p = " << p << "\t\tq = " << q << endl;
    return 0;
}