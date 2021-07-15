#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;

    int s, n;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        v.push_back(x);
    }

    vector<int>::iterator it;

    int b;
    vector<int> c;
    for (int i = 0; i < b; i++)
    {
        cin >> c;

        it = lower_bound(v.begin(), v.end(), c[i]);
        if (it==v.end())
        {
             cout << "No" << it-v.begin() << endl;
        }
        else
           
            cout << "Yes" << it-v.begin()<< endl;
    }

    return 0;
}

