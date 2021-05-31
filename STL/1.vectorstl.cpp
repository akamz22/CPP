#include <iostream>
#include <vector>
#include <algorithm>
bool f(int x, int y)
{
    return x > y;
}
using namespace std;
int main()
{
    // C++ STL
    vector<int> a = {11, 2, 3, 14};

    cout << a[1] << endl;
    sort(a.begin(), a.end()); //O(nlogn)

    // 2 3 11 14
    bool present = binary_search(a.begin(), a.end(), 3); //true
    present = binary_search(a.begin(), a.end(), 4);      //false

    a.push_back(100);
    present = binary_search(a.begin(), a.end(), 100);

    //  2,3,11,14,100
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    //2,3,11,14,100,100,100,100,100
    a.push_back(123);
    //2,3,11,14,100,100,100,100,100,123

    // inserts 5 at the beginning
    a.insert(a.begin(), 5);

    auto it = lower_bound(a.begin(), a.end(), 100);  //>=
    auto it2 = upper_bound(a.begin(), a.end(), 100); //>

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; //5

    cout << "After sorting using function f" << endl;
    sort(a.begin(), a.end(), f);
    for (auto ir = a.begin(); ir != a.end(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of rbegin and rend: "<<endl;
    for (auto ir = a.rbegin(); ir != a.rend(); ++ir)
        cout << *ir << " ";

    cout << endl;

    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int &x : a)
    {
        x++;
        cout << x << " ";
    }
}
