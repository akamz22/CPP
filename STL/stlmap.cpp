// C++ implementation of simple method to find count of
// pairs with given sum.
#include <iostream>
#include<unordered_map>
using namespace std;

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
void getPairsCount(int arr[], int n, int sum)
{
    unordered_map<int, int> m;

    // Store counts of all elements in map m
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    for (auto itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    // int twice_count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     twice_count += m[sum - arr[i]];

    //     if (sum - arr[i] == arr[i])
    //         twice_count--;
    // }

    // // return the half of twice_count
    // return /*twice_count / 2*/;
}

// Driver function to test the above function
int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    getPairsCount(arr, n, sum);
    return 0;
}