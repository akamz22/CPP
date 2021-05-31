#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void show(vector<int> a)
{
    for (int i : a)
        cout << i << ",";
    // int sum;
    // for (int x : a)
    // {
    //     sum += x;
    // }
    // cout << "\nSum : " << sum;
}

int main()
{
    vector<int> a;
    a = {1, 5, 8, 9, 2, 4, 5, 7, 8, 9, 3};
    //int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a);

    // cout << "\n\nLet's say we want to search for ";
    // cout << "\n2 in the array So, we first sort the array";
    int n = a.size();
    sort(a.begin(), a.end());
    cout << "\n\nThe array after sorting in increasing order is : \n";
    show(a);
    sort(a.rbegin(), a.rend());
    cout << "\n\nThe array after sorting in decreasing order is : \n";
    show(a);
    cout << "\n\nNow, we do the binary search";
    sort(a.begin(), a.end());
    cout << "\n\nThe array after sorting in increasing order is : \n";
    show(a);
    // if (binary_search(a.begin(), a.end(), 2))
    //     cout << "\nElement found in the array";
    // else
    //     cout << "\nElement not found in the array";
    if (binary_search(a.begin(), a.end(), 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    return 0;
}