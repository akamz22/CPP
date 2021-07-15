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
    int st, ed;

    int x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        v.push_back(x);
    }
    cin >> s;
    v.erase(v.begin() + (s-1));
    // for (int i = 0; i != v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    cin >> st;
    cin>> ed;
    v.erase(v.begin() + (st-1), v.begin() + (ed-1));
    for (int i = 0; i != v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
