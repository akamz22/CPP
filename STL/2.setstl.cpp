#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for (int x : s)
        cout << x << " ";
    cout << endl;

    auto it = s.find(-1);//search element
    if (it == s.end())
    {
        cout << "Not present\n";
    }
    else
    {
        cout << "present\n";
        cout << *it << endl;
    }

    auto it2 = s.upper_bound(-1);//just greater 
    auto it3 = s.upper_bound(0);
    auto it4 = s.lower_bound(-1);//just greater or equalto
    cout << *it2 << " " << *it3 << " " << *it4 << endl;

    auto it5 = s.upper_bound(2);
    if (it5 == s.end())
    {
        cout << "Not found\n";
    }

    return 0;
}